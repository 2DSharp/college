syms y(x)
Dy = diff(y);

de3 = diff(y, x, 2) == 4 * diff(y) - 3 * y + 4 * exp(3*x);

cond1= y(0) == -1;
cond2= Dy(0) == 3;
conds = [cond1 cond2]

fprintf("The solution to DE WITH INITIAL CONDITIONS IS: ")
y(4) = dsolve(de3, conds);
ysol = simplify(y4)
