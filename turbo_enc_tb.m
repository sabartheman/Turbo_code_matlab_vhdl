
clear


mm = 1;                                        % number of data blocks
nn = 8;                                      % length of data block


intlv = rndintlv(nn);                       % random interleaver

% transmit
msg = [1 0 1 0 1 1 0 0];                      % generate binary message data block

[output1 output2 output3] = tbcenc(msg,intlv);

encoded_output = [output1' output2' output3']