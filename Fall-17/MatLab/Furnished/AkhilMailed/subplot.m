%programme related to sub-plots
clc
clear all
x=0:.1:2*pi;
subplot(2,2,1);
plot(x,sin(x),'b*')
title('sin(x)')
subplot(2,2,2);
plot(x,cos(x),'r-0')
title('cos(x)')
subplot(2,2,3)
plot(x,exp(-x),'g.')
title('exp(-x)');
subplot(2,2,4);
plot(x,2.*x-x.^2,'m-0')
title('2x-x^2')