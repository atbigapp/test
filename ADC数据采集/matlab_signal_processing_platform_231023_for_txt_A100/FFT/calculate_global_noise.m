function [noiseValue] = calculate_global_noise(Radar_cube, Cfg)
%------------------------------------------------------------------------------
%   calculate_global_noise.m
%------------------------------------------------------------------------------
%   Author       : ZhuXinpeng
%   Created      : 2022-06-23
%   Description  : 
%------------------------------------------------------------------------------
RVimage = zeros(Cfg.rng_nfft / 2, Cfg.vel_nfft);

noiseRegion1RangeStart = round(0.75 * Cfg.rng_nfft / 2);
noiseRegion1RangeEnd = round(0.8 * Cfg.rng_nfft / 2);
noiseRegion2RangeStart = round(0.75 * Cfg.rng_nfft / 2);
noiseRegion2RangeEnd = round(0.8 * Cfg.rng_nfft / 2);

noiseRegion1VelocityStart = 6;
noiseRegion1VelocityEnd = round(Cfg.vel_nfft / 2 - 6);
noiseRegion2VelocityStart = round(Cfg.vel_nfft / 2 + 6);
noiseRegion2VelocityEnd = round(Cfg.vel_nfft - 6);

rngSize = numel(noiseRegion1RangeStart:noiseRegion1RangeEnd);
velSize = numel(noiseRegion1VelocityStart:noiseRegion1VelocityEnd);

noiseRegion = zeros(rngSize, velSize);

for iArray = 1 : Cfg.nvirtual_array
    RVimage = RVimage + power(abs(Radar_cube(:, :, iArray)), 2);
end
RVimage = db(RVimage / Cfg.nvirtual_array, 'power');

noiseRegion1 = RVimage(noiseRegion1RangeStart:noiseRegion1RangeEnd, noiseRegion1VelocityStart:noiseRegion1VelocityEnd);
noiseRegion2 = RVimage(noiseRegion2RangeStart:noiseRegion2RangeEnd, noiseRegion2VelocityStart:noiseRegion2VelocityEnd);

for i = 1:rngSize
    for j = 1:velSize
        noiseRegion(i, j) = min(noiseRegion1(i, j), noiseRegion2(i, j));
    end
end
noiseValue = mean(noiseRegion, 'all');

end