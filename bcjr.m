% file name:    bcjr.m
% description:  [llr,a,b,g,le] = bcjr(r,ap,lc) performs bcjr decoding for the example (1 5/7) rsc code, 
%               where r is the received sequence, ap is the a priori supplied by an external source, and 
%               lc represents the channel condition.
%               the function outputs llr (log likelihood ratio), a (alpha), b (beta), g (gamma) and 
%               le (the a posteriori, i.e., the extrinsic llr for other decoder).
%               following this example, the readers should be able to program for other rsc codes without difficulties.
%               an example of the function can be found in 'tbcdemo.m'.
% algorithm:    bcjr algorithm
% author:       y. jiang 
% date:         june 2010
% revision:     1.0


%clear all;

function [llr,a,b,g,le] = bcjr(r,ap,lc)

rs = r(1:2:end-1);                                          % extract systematic bits
r = repmat(r,8,1);

nn = length(rs);                                            % number of systematic bits

if ap == 0
    ap = zeros(1,nn);
end
le = ap';

c = [1,1;-1,-1;-1,-1;1,1;-1,1;1,-1;1,-1;-1,1];              % list of codewords in a trellis (pay attention to the order)


g = zeros(8,length(ap));                                    % g: gamma. initialization
k = 1;
for i=1:2:length(r)-1                                       % compute gamma. eq.(6.14)
    g(:,k) = 0.5*lc*(c(:,1).*r(:,i) + c(:,2).*r(:,i+1)) + 0.5*c(:,1).*le(k);
    k = k + 1;
end
g = exp(g);

g1 = g([1 3 2 4 5 7 6 8],:);                                % shuffle gamma to ficilitate alpha calculation below
a = zeros(4,nn+1); a(1,1) = 1;                              % a: alpha. initialization
for i = 2:length(a)                                         % compute alpha. eq.(6.16)
    a(1,i)=sum(g1(1:2,i-1).*[a(1,i-1) a(3,i-1)]');
    a(2,i)=sum(g1(3:4,i-1).*[a(1,i-1) a(3,i-1)]');
    a(3,i)=sum(g1(5:6,i-1).*[a(2,i-1) a(4,i-1)]');
    a(4,i)=sum(g1(7:8,i-1).*[a(2,i-1) a(4,i-1)]');
end

b = zeros(4,nn+1); b(1,end) = 1;                            % b: beta. initialization
for i = length(b)-1:-1:1                                    % compute beta. eq.(6.18)
    b(1,i)=sum(g(1:2,i).*[b(1,i+1) b(2,i+1)]');
    b(2,i)=sum(g(5:6,i).*[b(3,i+1) b(4,i+1)]');
    b(3,i)=sum(g(3:4,i).*[b(1,i+1) b(2,i+1)]');
    b(4,i)=sum(g(7:8,i).*[b(3,i+1) b(4,i+1)]');
end

for i=1:nn                                                  % compute llr. eq.(6.13)                                                   % 
    sp(i) = a(1,i)*g(1,i)*b(1,i+1) + a(3,i)*g(4,i)*b(2,i+1) + a(2,i)*g(6,i)*b(4,i+1) + a(4,i)*g(7,i)*b(3,i+1);
    sm(i) = a(1,i)*g(2,i)*b(2,i+1) + a(3,i)*g(3,i)*b(1,i+1) + a(2,i)*g(5,i)*b(3,i+1) + a(4,i)*g(8,i)*b(4,i+1);
end
llr = log(sp./sm);

le = llr - lc*rs - ap;                                      % comupte le. eq.(6.24)