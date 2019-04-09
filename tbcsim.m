% filename:     tbcsim.m 
% description:  simulate ber performance of example turbo code (rate-1/3, rsc = (1 5/7)) 
% algorithm:    logmap
% author:       y.jiang
% date:         june 2010
% version:      1.0


% function[ebn0,ber] = tbcsim()

% specify simulation paramters
mm = 1000;                                        % number of data blocks
nn = 8;                                      % length of data block
ebn0 = 5;                                       % eb/n0, dB
ebn0_1 = 10.^(ebn0/10);                         % eb/n0 in linear scale
ebn0_2 = ebn0_1*1/3;                            % eb/n0*coding rate

Lc = 2*ebn0_1;                                  % eq.(6.15)
iter = 10;                                       % number of decoding iterations

% simulation starts
fprintf('\n');
disp('--------- turbo code simulation starts ---------')
total_err = 0;                                  % total number of errors

fprintf('please wait\n');
for k = 1:mm
    if mod(k,10) == 0
        fprintf('...\n');
    else
        fprintf('... ');
    end

    intlv = rndintlv(nn);                       % random interleaver

    % transmit
    msg = randi([0 1],nn);                      % generate binary message data block
    c = tbcenc(msg,intlv);                      % encoding
    tx = -2*(c - 0.5);                          % bpsk mapping

    % awgn channel
    n0 = 1/ebn0_2;
    sigma = sqrt(n0/2);                         % noise var.
    ns = sigma*randn(size(tx));
    r = tx + ns;                                % add awgn

    % receive
    dec_out = tbcdec(r,iter,intlv,Lc);          % decoding

    err = length(find(dec_out' ~= tx(:,1)));    % count number of errors
    total_err = total_err + err;
end

ber = total_err/(nn*mm);
if mod(k,10) ~= 0
    fprintf('\n');
end
disp('simulation complete, the result is:');
fprintf('eb/n0 = %1.1f db       ber = %1.2e\n',ebn0,ber);
disp('------------------------------------------------');

% end 