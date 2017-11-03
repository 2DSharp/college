%polar graphs r=a(1+cos(theta))
syms theta
r=2*(1-cos(theta));
ezpolar(r,[0,2*pi])