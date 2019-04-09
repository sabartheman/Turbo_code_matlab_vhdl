mm = 1;                                        % number of data blocks
nn = 8;                                      % length of data block
ebn0 = 5;                                       % eb/n0, dB
ebn0_1 = 10.^(ebn0/10);                         % eb/n0 in linear scale
ebn0_2 = ebn0_1*1/3;                            % eb/n0*coding rate

Lc = 2*ebn0_1;                                  % eq.(6.15)
iter = 5; 

intlv = rndintlv(nn);                       % random interleaver

% transmit
msg = [1 0 1 0 1 1 0 0];                      % generate binary message data block
c = tbcenc(msg,intlv);                      % encoding
tx = -2*(c - 0.5);                          % bpsk mapping

% awgn channel
%     n0 = 1/ebn0_2;
%     sigma = sqrt(n0/2);                         % noise var.
%     ns = sigma*randn(size(tx));

%with or without noise this encoding and decoding method is horrible.  
r = tx; %+ ns;                                % add awgn

% receive
dec_out = tbcdec(r,iter,intlv,Lc);          % decoding

dec_out = round(((dec_out -.5)/-2))
msg 