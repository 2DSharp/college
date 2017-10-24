syms y(x)
DY = diff(y)

de5 = diff(y, x , 2) == 4*diff(y) - 4*y + 8*(x^2 + exp(2*x)*sin(2*x));
fprintf('the solution of DE is')
y8(x) = dsolve(de5)