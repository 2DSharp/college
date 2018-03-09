m = 2;

msg = 'IAMHIDINGG';
  
%ASCII Values

X = double(msg-64);

%modulo

modulo = 26;

n = size(X, 2);

key = [1 2; 0 3];

%encrypting

Y = 0;
i = 1;

while i<= n

  Ytmp = key * transpose(X((i):i+m-1));
  Ytmp = transpose(Ytmp);
  Ytmp = (mod(Ytmp, modulo));
  Y = [Y Ytmp];
  i = i + m;

end

Y = Y(2:end);
Ymsg = char(Y+64)

