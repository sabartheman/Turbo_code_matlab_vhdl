% file name:    tbenc.m
% description:  c = tbenc(msg_in,intlv) performs turbo code encoding (component encoder: rate-1/3, rsc = (1 5/7)). 
%               msg_in is the input binary message sequence. intlv specifies the interleaver's permutation function.
%               c is encoded sequence.
%               an example is given in matlab experiment 6.3.
% author:       y. jiang 
% date:         june 2010
% veintlvrsion:      1.0


function [output1 output2 output3] = tbcenc(msg_in,intlv)

msg_in1 = zeros(1,8);

% msg_in1 = msg_in(intlv);

c =  [0 0 0 0 0 0 0 0];
c1 = [0 0 0 0 0 0 0 0];
c2 = [0 0 0 0 0 0 0 0];

for i = 1:8
    msg_in1(i) = msg_in(intlv(i));
end

% encoding
% c1 = rsc(msg_in);                                 
% c2 = rsc(msg_in1);                                % getting rid of
% function call in this section, this causes quite a few allocation errors
% in the hdlcoder

g1 = [1 0 1]; g2 = [1 1 1];                         % code generator is (1,5/7)
reg = [0 0];                                        % initialization
% for i = 1:length(msg_in)
for i = 1:8                                         % for this case only
    tmp = xor(msg_in(i),xor(reg(1),reg(2)));        % feedback
    c(i) = xor(tmp,reg(2));                         % feedforward           
    reg = [tmp reg(1)];                             % shift register
end

c1 = c;
c = [0 0 0 0 0 0 0 0];

%c2 rsc encoding
g1 = [1 0 1]; g2 = [1 1 1];                         % code generator is (1,5/7)
reg = [0 0];                                        % initialization
% for i = 1:length(msg_in1)
for i = 1:8                                         % for this case only
    tmp = xor(msg_in1(i),xor(reg(1),reg(2)));        % feedback
    c(i) = xor(tmp,reg(2));                         % feedforward           
    reg = [tmp reg(1)];                             % shift register
end

c2 = c;

output1 = false(1,8)
output2 = false(1,8)
output3 = false(1,8)


%trasnpose might not be supported?
for i = 1:8
   output1(i) = msg_in(i);
end


for i = 1:8
   output2(i) = c1(i);
end


for i = 1:8
   output3(i) = c2(i);
end

end
% output = [msg_in' c1' c2'];