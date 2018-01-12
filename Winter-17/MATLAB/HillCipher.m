% Encryption

plaintext = input('Enter the text', 's');
matText = double(plaintext);
key = [ 1 0; 0 3];
b = size(matText, 2);
cipherMat = [ ];
if mod(b, 2) ~ 0
  matText(end + 1) = matText(1, size(matText, 2));
end

for i = [1:2:size(matText, 2)]

  pair = [mod(matText(i), 64) mod(matText(i+1), 64)];
  
  cipherBlock = pair * key;
  cipherMat(end + 1) = cipherBlock(1);
  cipherMat(end + 1 ) = cipherBlock(2);
  
end
cipherText = char(cipherMat)


				% Decryption
plainMat = [ ];
matText = double(cipherText);
for i = [1:2:size(matText, 2)]
  
  pair = [matText(i); matText(i+1)];
  plainBlock = inv(key) * pair;
  plainMat(end + 1) = plainBlock(1)+ 64;
  plainMat(end + 1) = plainBlock(2) + 64;
end

plaintext = char(plainMat)
