% Integration using double variable
syms x y
dd1=int((x^3+x*y^2),y,0,x^2)
dd2=int(dd1,x,0,5)
%Samedouble integral can also be done by
dd3=int(int((x^3+x*y^2),y,0,x^2),x,0,5)