clc
clear all
%gradient
syms x y z 
%enter the sclar funcn
f1=x*y*z^2;
%gradient is calculated
grad1=gradient(f1,[x,y,z])
%subs (x,y,z) as (1,1,1)
f2=subs(grad1,[x y z],[1,1,1])