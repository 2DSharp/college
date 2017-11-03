%region between two polar curves
theta = linspace(0,2*pi);
r=2*cos(theta);
polar(theta,r);
hold on
rho=cos(theta);
polar(theta,rho)
hold off
title('region between two polar curves')