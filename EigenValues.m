A = [0 1 0; 0 0 1; 4 -17 8];
%e = eig(A);
[e,v] = eig(A);
%diag(v);
trace(A);
%imshow(rand(600));

eye(3);
syms L
F = det(A - L * eye(3));
solve(F);
P = e;
invP = inv(P);
invP * A * P