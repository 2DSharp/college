%leminiscate diagram r^2=a^2*(cos(2*(theta)))
syms theta 
%assign the value of a=5
a=5;
r=a.*sqrt(cos(2*theta));
ezpolar(r,[0,2*pi])
title('leminiscate')