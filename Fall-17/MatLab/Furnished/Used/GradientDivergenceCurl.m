clc
clear all
%To find gradient

syms x y z
f=(x.^3+y.^3+z.^3-3*x*y*z);
%calculating gradient

grad1=gradient(f)

  %substituting the points
  grad2=subs(grad1,[x y z],[2,3,4])

  %divergence of the given vector function
  div1=divergence(grad1)

  %curl of the above vector function
  curl1=curl(grad1)
  
