clc
clear all
syms x y z
%enter the i,j,k components of vector f
f1=x.^2.*y.*z;
f2=x.*y.^2.*z;
f3=x.*y.*z.^2;
%divergence of F is
fprintf('div of F=')
d3=divergence([f1,f2,f3],[x,y,z])
%diverenc eof f at point (x0,y0,z0) is
d4=subs(d3,[x y z],[1,2,3])
fprintf('div(grad)of F=')
%div(grad(f)) is
d5=gradient(d3,[x,y,z])