%To find the work done by the given force

clc
clear all

syms x y z t

F = input('enter the i, j and k components of force in the vector form');

%for two dimensions, k component is zero

T = input('enter the parametric form of x, y and z as a vector input');
R = [x y z];

L = input('enter the parametric lower limit');
U = input('enter the parametric upper limit');

R1 = subs(R,[x,y,z],[T(1),T(2),T(3)]);

dR1 = diff(R1,t);

F1 = subs(F,[x,y,z],[T(1),T(2),T(3)])

NF=F1.*dR1;
NF1=NF(1)+NF(2)+NF(3);

I=int(NF1,t,L,U)
