plaintext = input('Enter the text', 's');
matText = double(plaintext) - 64;
key = [ 1 0; 0 3];
b = size(matText, 2);

if mod(b, 2) ~ 0
  matText(end + 1) = matText(1, size(matText, 2));
end

%finalMat = char.empty(1, b);
for i = [1:2:size(matText, 2)]
  pair = [matText(i)-64 matText(i+1)-64];

  cipherBlock = pair * key
  char(cipherBlock)
end
%if ( == 0)
  %matText(1, size(matText, 2))
	
		       
