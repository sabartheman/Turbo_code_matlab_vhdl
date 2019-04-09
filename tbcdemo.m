% file name:    tbcdemo.m 
% description:  demonstration of turbo decoding process using bcjr algorithm
% author:       y.jiang
% date:         june 2010
% revision:     1.0

clear all;
close all;

r = [-0.3 0.7 0.6; -0.8 0.7 -0.8; 0.2 0.5 0.9; -0.1 0.6 0.6; 0.2 0.6 0.5; 0.6 0.3 0.2; 0.5 0.9 0.6; -0.2 0.6 0.5];   
                                                                % received sequence

% demultiplex r into 3 subsequences
rs = r(:,1);                                                    % systematic bit
r1 = r(:,2);                                                    % parity bit 1
r2 = r(:,3);                                                    % parity bit 2

nn = length(r);

p = [8 2 5 4 7 6 3 1];                                          % intlv's permutation function

eb_n0 = -0.5;                                                   % snr per bit, db
Lc = 2*10^(eb_n0/10);                                           % eq.(6-15)

Le = zeros(1,nn);                                               % initial extrinsic probability

for k = 1:5
    if mod(k,2)                                                 % odd numbered iter.
        r = [rs r1];
        r = reshape(r',1,2*nn);
        Le(p) = Le;                                             % de-interleave
    else                                                        % even numbered iter.
        rs = rs(p);                                             % interleave
        r = [rs r2];
        r = reshape(r',1,2*nn);
        Le = Le(p);                                             % interleave
    end
    
    [LLR,a,b,g,Le] = bcjr(r,Le,Lc);
end
L = LLR