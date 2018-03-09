function plaintext = hilldecrypt(cipherText, key)

  plainMat = [ ];
  matText = double(cipherText);
  for i = [1:2:size(matText, 2)]
    
    pair = [matText(i); matText(i+1)];
    plainBlock = inv(key) * pair;
    plainMat(end + 1) = plainBlock(1) + 63;
    plainMat(end + 1) = plainBlock(2) + 63;
  end

  plaintext = char(plainMat);
