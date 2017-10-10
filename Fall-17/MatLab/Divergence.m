% Example of divergence of a vector function r = x^2yz i + xy^2z j + xyz^2
% k

syms  x y z
% Enter i, j, k components of vector f

f1 = x.^2.*y.*z;
f2 = x.*y.^2.*z;
f3 = x.*y.*z.^2;

% Divergence of f = f1 i + f2 j + f3 k
fprintf('Divergence of F = ')
d3 = divergence([f1, f2, f3], [x, y, z])

% Divergence of f at (x0, y0, z0) is
d4 = subs(d3, [x y z], {1, 2, 3})

fprintf('Divergence(Gradient) of f = ')

% Divergence of gradient of f is %
d5 = gradient(d3, [x, y, z])