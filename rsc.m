% file name:    rsc.m
% description:  enc_out = rsc(msg_in) is rsc encoder with the generator (1 5/7), where
%               msg_in is the input binary message sequence and enc_out is the encoded output. 
%               please note the systematic bits are omitted in the output.
%               the function is used in 'tbcenc.m'.
% author:       y. jiang 
% date:         june 2010
% version:      1.0

%
function enc_out = rsc(msg_in)

% c = zeros(1,8);

g1 = [1 0 1]; g2 = [1 1 1];                         % code generator is (1,5/7)

reg = [0 0];                                        % initialization

for i = 1:length(msg_in)
    tmp = xor(msg_in(i),xor(reg(1),reg(2)));        % feedback
    c(i) = xor(tmp,reg(2));                         % feedforward           
    reg = [tmp reg(1)];                             % shift register
end

enc_out = c;