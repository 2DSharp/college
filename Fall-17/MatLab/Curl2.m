% v = 3.*y^4.*z^2 i + 4.*x^3.*z^2 j + 3.*x^2.*y^2 k

syms  x y z
% Enter i, j, k components of vector v

v1 = 3.*y^4.*z^2;
v2 = 4.*x^3.*z^2;
v3 = 3.*x^2.*y^2;

% curl of v = v1 i + v2 j + v3 k
fprintf('curl of F = ')
c1 = curl([v1, v2, v3], [x, y, z])

% curl of v at (x0, y0, z0) is
c2 = subs(c1, [x y z], {1, 2, 3})

fprintf('curl(curl) of v = ')

% curl of curl of v is %
c3 = curl(c1, [x, y, z])