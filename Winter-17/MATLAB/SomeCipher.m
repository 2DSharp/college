m = 2;
msg = 'IAMHIDINGG';
X = double(msg) - 64;
modulo = 26;
				%modulo
n = size(X, 2)/m;
key = [1 2; 0 3];

				% Encrypting
Y = 0;
i = 1;

while i <= 2*n
  Ytmp = key * transpose(X((i): i + m - 1));
  Ytmp = transpose(Ytmp);
  Ytmp = (mod(Ytmp, modulo));
  Y = [Y Ytmp];
  i = i + m;
end
Y = Y(2:end);
Ymsg = char(Y+64)
