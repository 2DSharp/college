%tangent line to a curbe  y = f(X)
t = 0: 0.01: 10
y = cos(t)
plot(t,y)

dy = diff(y)./diff(t)
k = 300;
tang = (t - t(k)) * dy(k) + y(k)

hold on

plot(t, tang)
scatter(t(k), y(k))
hold off