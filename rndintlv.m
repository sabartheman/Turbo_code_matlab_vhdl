% file name:    rndintlv.m
% description:  the function p = rndintlv(n) is a random interleaver. 
%               it generates a permutation function p for a data sequence of length n.
% author:       y. jiang 
% date:         june 2010
% version:      1.0

function p = rndintlv(n)

p = randperm(n);