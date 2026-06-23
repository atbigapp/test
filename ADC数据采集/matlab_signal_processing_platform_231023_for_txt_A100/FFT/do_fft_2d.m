function [rngFftData, velFftData] = do_fft_2d(adcData, Cfg)
%------------------------------------------------------------------------------
%   do_fft_2d.m
%------------------------------------------------------------------------------
%   Author       : ZhuXinpeng
%   Created      : 2021-05-13
%   Description  : window and 2D-FFT
%------------------------------------------------------------------------------
%   Reviser      : ZhuXinpeng
%   Edited       : 2022-03-30
%   Description  : 加窗要使用实际的采样点数和chirp数
%------------------------------------------------------------------------------

%% window
% 生成距离维窗
switch(Cfg.rng_win)
    case 1
        rngWinVec = chebwin(Cfg.adc_sample_num, Cfg.rng_win_params(1));
    case 2
        rngWinVec = hann(Cfg.adc_sample_num);
    case 3
        rngWinVec = hamming(Cfg.adc_sample_num);
    otherwise
        rngWinVec = ones(Cfg.adc_sample_num, 1);
end

% 生成速度维窗
switch(Cfg.vel_win)
    case 1
        velWinVec = chebwin(Cfg.nchirp / Cfg.nvirtual_chirp, Cfg.vel_win_params(1))';
    case 2
        velWinVec = hann(Cfg.nchirp / Cfg.nvirtual_chirp)';
    case 3
        velWinVec = hamming(Cfg.nchirp / Cfg.nvirtual_chirp)';
    otherwise
        velWinVec = ones(Cfg.nchirp / Cfg.nvirtual_chirp, 1)';
end

%% do 2D-FFT
rngFftWin = zeros(Cfg.adc_sample_num, Cfg.nchirp / Cfg.nvirtual_chirp, Cfg.nvirtual_array);
velFftWin = zeros(Cfg.rng_nfft, Cfg.nchirp / Cfg.nvirtual_chirp, Cfg.nvirtual_array);
rngFftData = zeros(Cfg.rng_nfft, Cfg.nchirp / Cfg.nvirtual_chirp, Cfg.nvirtual_array);
velFftData = zeros(Cfg.rng_nfft / 2, Cfg.vel_nfft, Cfg.nvirtual_array);
for iArray = 1 : Cfg.nvirtual_array
    
    % Range Windowing
    for i = 1 : Cfg.nchirp / Cfg.nvirtual_chirp
        rngFftWin(:, i, iArray) = adcData(1:Cfg.adc_sample_num, i, iArray).*rngWinVec;
    end
    
    % 相位补偿(De-scrambling以及Anti-interference)、零多普勒去除和噪声方差估计
    for i = 1 : Cfg.vel_nfft
        %             FftData.siso_rng_fft(:, i) = phase_compensation_de_scrambling(FftData.siso_rng_fft(:, i), Cfg);
%         rngFftData(:, i, iArray) = phase_compensation_anti_interference(rngFftData(:, i, iArray), Cfg);
        %             FftData.siso_rng_fft(:, i) = zero_doppler_removal(FftData.siso_rng_fft(:, i), Cfg);
        %             FftData.siso_rng_fft(:, i) = global_noise_estimate(FftData.siso_rng_fft(:, i), Cfg);
    end

    % Range FFT
    for i = 1 : Cfg.nchirp / Cfg.nvirtual_chirp
        rngFftData(:, i, iArray) = fft(rngFftWin(:, i, iArray), Cfg.rng_nfft) / double(Cfg.rng_fft_scalar);
    end

    % Velocity Windowing
    for i = 1 : Cfg.rng_nfft
        velFftWin(i, 1:Cfg.nchirp / Cfg.nvirtual_chirp, iArray) = rngFftData(i, 1:Cfg.nchirp / Cfg.nvirtual_chirp, iArray).*velWinVec;
    end
      
    % Velocity FFT
    for i = 1 : Cfg.rng_nfft / 2
        velFftData(i, :, iArray) = fft(velFftWin(i, :, iArray), Cfg.vel_nfft) / double(Cfg.vel_fft_scalar);
    end
    
end

end