% Subplotting  graphs- 2 

t = linspace(0, 6*pi, 100);

x = cos(t);
y = sin(t);
z = t;

% 1. Circular Helix example
subplot(2, 2, 1);
plot3(x, y, z)
xlabel('cost(t)')
ylabel('sin(t)')
title('A circular helix x(t) = cos(t), y(t) = sin(t), z(t) =t')

% 2. XY-plane
subplot(2, 2, 2);
plot3(x, y, z)
view(0,90)
xlabel('cos(t)')
ylabel('sin(t)')
title('Projection in the XY-plane')

% 3. XZ-plane
subplot(2, 2, 3)
plot3(x, y, z)
view(0, 0)
xlabel('cos(t)')
zlabel('t')
title('Projection in the XZ-plane')

% 4. YZ-plane
subplot(2, 2, 4)
plot3(x, y, z)
view(90, 0)
ylabel('sin(t)')
zlabel('t')
title('Projection in the YZ-plane')
