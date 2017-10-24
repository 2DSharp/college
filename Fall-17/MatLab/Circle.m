clc 
t=linspace(0, 2*pi, 101);
x = 1 + 2*cos(t);
y = 3+2*sin(t);
plot(x,y,'g*')
axis equal
xlabel('x-axis')
ylabel('y-axis')
title('Circle')