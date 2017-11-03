%programme related to sub-plots
clc
clear all
t=linspace(0,6*pi,100);
X=cos(t);
Y=sin(t);
Z=t;
subplot(2,2,1);
plot3(X,Y,Z)
subplot(2,2,2);
plot3(X,Y,Z);
View(0,90)
subplot(2,2,3)
plot3(x,y,z);
View(0,0)
subplot(2,2,4);
plot3(x,y,z);
View(90,0)