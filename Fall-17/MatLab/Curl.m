syms  x y z
% Enter i, j, k components of vector v

v1 = x.^2.*y.*z;
v2 = x.*y.^2.*z;
v3 = x.*y.*z.^2;

% curl of v = v1 i + v2 j + v3 k
fprintf('curl of F = ')
c1 = curl([v1, v2, v3], [x, y, z])

% curl of v at (x0, y0, z0) is
c2 = subs(c1, [x y z], {1, 1, 1})

fprintf('curl(curl) of v = ')

% curl of curl of v is %
c3 = curl(c2, [x, y, z])