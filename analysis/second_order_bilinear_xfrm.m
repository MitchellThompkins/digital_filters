clc;
clear all;
close all;

%Sampling Frequency
fs = 10000; %Hz
Ts = 1/fs;
rad_scale = 2*pi;

%Filter Cutoff
fc = 200;
rad_scale = 2*pi;

b = [7.264369e-3 6.680553e-3];
a = [1 -1.1763823 0.777768];

%Frequency Plot
f_plot = 0.01:0.01:10000;

%Discrete tf
%h_disc = freqz(b, a, f_plot, Ts);
%h_disc_mag = 20*log10(abs(h_disc));
%h_disc_mag = angle(h_disc)*180/pi;

%Continuous tf
n = [1];
d = [1/((fc*rad_scale)^2) 2/(fc*rad_scale) 1];
h_cont = n(1) ./ (d(1)*((f_plot*rad_scale*1i).^2) + d(2)*(f_plot*rad_scale*1i) + d(3));
h_cont_mag = 20*log10(abs(h_cont));
h_cont_phase = angle(h_cont)*180/pi;

%Bilinear Transform
[za, zb] = bilinear(n,d,Ts);
h_bilinear = freqz(za, zb, f_plot, fs);
h_bi_mag = 20*log10(abs(h_bilinear));
h_bi_phase = angle(h_bilinear)*180/pi;

figure();
fig = gca;
plot(f_plot, h_cont_mag, f_plot, h_bi_mag);
legend('Continuous', 'Bilinear xfrm');
set(fig,'Xscale', 'log');
ylabel('Magnitude (dB)');
xlabel('freq (Hz)');
