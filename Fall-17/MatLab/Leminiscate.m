% Leminiscate diagram r^2 = a^2cos(2*theta)
syms theta

% Assign the value of a
a = 5;

r = a.*sqrt(cos(2*theta));
ezpolar(r, [0, 2 * pi])
title('Leminiscate')