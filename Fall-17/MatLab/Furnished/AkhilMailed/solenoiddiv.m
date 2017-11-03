%Solenoidal Vector
clc
clear all
syms x y z
%enter the i,j,k components of vector f
f1=3*y.^4*z.^2;
f2=4*x.^3*z.^2;
f3=3*x.^2*y.^2;
%divergence of F is
fprintf('div of F=')
d3=divergence([f1,f2,f3],[x,y,z])
%diverenc eof f at point (x0,y0,z0) is
d4=subs(d3,[x y z],[1,2,3])
fprintf('div(grad)of F=')
%div(grad(f)) is
d5=gradient(d3,[x,y,z])