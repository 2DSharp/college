clc
clear all
%gradient
syms x y z 
%enter the sclar funcn
f1=x*y^3+y*z^3;
%gradient is calculated
grad1=gradient(f1,[x,y,z])
%subs (x,y,z) as (-2,3,4)
f2=subs(grad1,[x y z],[-2,3,4])