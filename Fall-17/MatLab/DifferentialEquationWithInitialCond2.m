syms y(x)
de2 = diff(y) == exp(y - x ^ 2) * 2;
cond = y(0) == 1;fprintf('the solution of d.e. is')
y2(x) = dsolve(de2, cond)