clc
clear all

%leminiscate diagram r^2=a^2*(cos(2*(theta)))

  syms theta

  %assigning the value of a=5

  a=5;
r=a.*sqrt(cos(2*theta));
ezpolar(r,[0,2*pi])
title('leminiscate')

clear all

%To find the area using double integral

dI=int(int(a.*sqrt(cos(2*theta)),0,2),0,pi/4)
  
