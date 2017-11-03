% Output is a {3 by 3} 0 matrix

%Jacobian

clc
clear all

syms x y z
syms u v w

%Calculating Jacobian Value

fprintf('Jacobian value is')

  jacobian([(y*z)/x, (z*x)/y, (x*y)/z], [u, v, w])
