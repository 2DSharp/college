function cipherText = hillencrypt(plaintext, key)
				% Modified hill cipher implementation
  matText = double(plaintext);
  b = size(matText, 2);
  cipherMat = [ ];
  if mod(b, 2) ~ 0
    matText(end + 1) = matText(1, size(matText, 2));
  end

  for i = [1:2:size(matText, 2)]

    pair = [mod(matText(i), 63) mod(matText(i+1), 63)];
    
    cipherBlock = pair * key;
    cipherMat(end + 1) = cipherBlock(1);
    cipherMat(end + 1 ) = cipherBlock(2);
    
  end
  cipherText = char(cipherMat);
