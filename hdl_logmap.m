% file name:    call_custom_logmap.m
% description:  [LLR,a,b,g,Le] = call_custom_logmap(r,ap,Lc) performs call_custom_logmap decoding for the example (1 5/7) rsc code. 
%               the inputs are r (received sequence), ap (a priori) and Lc (channel condition).
%               the outputs include LLR (llr), a (alpha), b (beta), g (gamma) and Le (extrinsic Lllr).
%               note: it is used in 'tbcdec.m'.
% algorithm:    call_custom_logmap decoding algorithm
% author:       y. jiang 
% date:         june 2010
% revision:     1.0


function [LLR,a1,a2,a3,a4,b1,b2,b3,b4,g1,g2,g3,g4,g5,g6,g7,g8,Le] = call_custom_logmap(r,ap,Lc)


% a = [a1;a2;a3;a4];
% b = [b1;b2;b3;b4];
% 
% g = [g1;g2;g3;g4;g5;g6;g7;g8;g9];




rs = r(1:2:end-1);                                          % extract systematic bits
r = repmat(r,8,1);

nn = length(rs); 

if ap == 0
    ap = zeros(1,nn);
end

La = ap;
Le = ap';

c = [1,1; -1,-1; -1,-1; 1,1; -1,1; 1,-1; 1,-1; -1,1];       % list of codewords in a trellis (pay attention to the order)

g = zeros(8,length(ap));                                    % g: gamma    
k = 1;
for i=1:2:length(r)-1                                       % compute gamma. eq.(6.30)
    g(:,k) = 0.5*Lc*(c(:,1).*r(:,i) + c(:,2).*r(:,i+1)) + 0.5*c(:,1).*Le(k);
    k = k + 1;
end
    

g1 = g([1 3 2 4 5 7 6 8],:);                                % re-order gamma to ficilitate alpha calculation below
a = -1e10*ones(4,length(ap)+1); a(1,1) = 0;                 % a: alpha. initialization
for i = 2:length(a)                                         % compute alpha. eq.(6.29) and (6.36)
    a1 = g1(1,i-1) + a(1,i-1); a2 = g1(2,i-1) + a(3,i-1);
    a(1,i) = max(a1,a2) + call_custom_log(1+call_custom_exp(-abs(a1-a2)));
        
    a1 = g1(3,i-1) + a(1,i-1); a2 = g1(4,i-1) + a(3,i-1);
    a(2,i) = max(a1,a2) + call_custom_log(1+call_custom_exp(-abs(a1-a2)));
        
    a1 = g1(5,i-1) + a(2,i-1); a2 = g1(6,i-1) + a(4,i-1);
    a(3,i) = max(a1,a2) + call_custom_log(1+call_custom_exp(-abs(a1-a2)));
        
    a1 = g1(7,i-1) + a(2,i-1); a2 = g1(8,i-1) + a(4,i-1);
    a(4,i) = max(a1,a2) + call_custom_log(1+call_custom_exp(-abs(a1-a2)));
end

b = -1e10*ones(4,length(ap)+1); b(1,end) = 0;               % b: beta. initialization
for i = length(b)-1:-1:1                                    % compute beta. eq.(6.29) and (6.36)
    b1 = g(1,i) + b(1,i+1); b2 = g(2,i) + b(2,i+1);
    b(1,i) = max(b1,b2) + call_custom_log(1+call_custom_exp(-abs(b1-b2)));
        
    b1 = g(5,i) + b(3,i+1); b2 = g(6,i) + b(4,i+1);
    b(2,i) = max(b1,b2) + call_custom_log(1+call_custom_exp(-abs(b1-b2)));
        
    b1 = g(3,i) + b(1,i+1); b2 = g(4,i) + b(2,i+1);
    b(3,i) = max(b1,b2) + call_custom_log(1+call_custom_exp(-abs(b1-b2)));
        
    b1 = g(7,i) + b(3,i+1); b2 = g(8,i) + b(4,i+1);
    b(4,i) = max(b1,b2) + call_custom_log(1+call_custom_exp(-abs(b1-b2)));
end

for i=1:nn                                                  % compute LLR. eq.(6.31) and (6.36)                                                   % 
    spa = a(1,i) + g(1,i) + b(1,i+1); spb = a(3,i) + g(4,i) + b(2,i+1); 
    sp1 = max(spa,spb) + call_custom_log(1+call_custom_exp(-abs(spa-spb)));
        
    spa = a(2,i) + g(6,i) + b(4,i+1); spb = a(4,i) + g(7,i) + b(3,i+1);
    sp2 = max(spa,spb) + call_custom_log(1+call_custom_exp(-abs(spa-spb)));
        
    sp(i) = max(sp1,sp2) + call_custom_log(1+call_custom_exp(-abs(sp1-sp2)));
        
    sma = a(1,i) + g(2,i) + b(2,i+1); smb = a(3,i) + g(3,i) + b(1,i+1);
    sm1 = max(sma,smb) + call_custom_log(1+call_custom_exp(-abs(sma-smb)));
        
    sma = a(2,i) + g(5,i) + b(3,i+1); smb = a(4,i) + g(8,i) + b(4,i+1);
    sm2 = max(sma,smb) + call_custom_log(1+call_custom_exp(-abs(sma-smb)));
        
    sm(i) = max(sm1,sm2) + call_custom_log(1+call_custom_exp(-abs(sm1-sm2)));
end


a1 = a(1,:);
a2 = a(2,:);
a3 = a(3,:);
a4 = a(4,:);

b1 = b(1,:);
b2 = b(2,:);
b3 = b(3,:);
b4 = b(4,:);

g1 = g(1,:);
g2 = g(2,:);
g3 = g(3,:);
g4 = g(4,:);
g5 = g(5,:);
g6 = g(6,:);
g7 = g(7,:);
g8 = g(8,:);


LLR = sp - sm;

Le = LLR - Lc*rs - La;                                      % comupte Le.