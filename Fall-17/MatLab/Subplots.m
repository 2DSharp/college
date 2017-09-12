x = 0:.1:2*pi'

subplot(2, 2, 1);
plot(x, sin(x), 'b*')
title('Sin(x)')

subplot(2,2,2);
plot(x,cos(x),'r-o')
title('Cos(x)')

subplot(2,2,3);
plot(x, exp(-x), 'g.')
title('exp(-x)')

subplot(2,2,4)
plot(x, 2.*x-x.^2, 'g*')
title('2x-2^2')
