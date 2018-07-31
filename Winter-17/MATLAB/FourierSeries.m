syms t;
T = 2;

a0 = (1/T) * (int (1, t, 0, 1));
F = a0;

for i = 0:5
	  an = (1/(T/2))*(int(cos(i*pi*t),t,0,1));
	  bn = (1/(T/2))*(int(sin(i*pi*t),t,0,1));
	  F = F + (an * cos(i*pi*t)) +(bn*sin(i*pi*t));
end
fplot(F)
