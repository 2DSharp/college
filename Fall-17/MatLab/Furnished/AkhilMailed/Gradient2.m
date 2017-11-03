%gradient
syms x y z 
%enter the sclar funcn
f1=log(x^2+y^2+z^2);
%gradient is calculated
grad1=grad(f1,[x,y,z])
%subs (x,y,z) as (3,2,2)
f2=subs(grad1,[x y z],[3,2,2])