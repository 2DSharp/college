% example 1 of triple intrgral in cartesian form
syms x y z

%f1=int(int(int(x*y*z,z,0,3-x-y),y,0,3-x),x,0,3)
f2=int(int(int(x+y+z,y,x-z,x+z),x,0,z),z,-1,1)
%f3=int(int(int(exp(x+y+z),z,0,x+y),y,0,x),x,0,1)
%f4=int(int(int(log(z),z,1,exp(x)),x,1,log(y)),y,0,exp(1))
