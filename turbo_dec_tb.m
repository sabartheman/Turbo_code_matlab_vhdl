clear

                              %original message

c = [1,1,0;0,1,1;1,0,0;0,1,1;1,1,0;1,1,0;0,1,0;0,1,1];         
c_temp = c';                                            %1st line is the original message

mm = 1;                                                 % number of data blocks
nn = 8;                                                 % length of data block
ebn0 = 5;                                               % eb/n0, dB
ebn0_1 = 10.^(ebn0/10);                                 % eb/n0 in linear scale
ebn0_2 = ebn0_1*1/3;                                    % eb/n0*coding rate

Lc = 2*ebn0_1;                                          % eq.(6.15)
iter = 5; 

intlv = rndintlv(nn);                                   % random interleaver

tx = -2*(c - 0.5);                                      % bpsk mapping

% awgn channel
n0 = 1/ebn0_2;
sigma = sqrt(n0/2);                                     % noise var.
ns = sigma*randn(size(tx));
r = tx + ns;                                            % add awgn

r1 = zeros(8,1);
r2 = zeros(8,1);
r3 = zeros(8,1);



r1 = r(:,1);
r2 = r(:,2);
r3 = r(:,3);


% receive
dec_out = tbcdec(r1,r2,r3,iter,intlv,Lc);                      % decoding                

dec_out = round(((dec_out -.5)/-2))

