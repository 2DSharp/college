% Gradient of a scalar function
syms x y z

% Enter the scalar function
f1 = log(x^2 + y^2 + z^2);

%Gradient is calculated by 'gradient'
grad1 = gradient(f1, [x, y, z])

%Substitute the values of (x, y, z) as (3, 2, 2)
f2 = subs(grad1, [x y z], {3, 2, 2})