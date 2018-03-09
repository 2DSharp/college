% Encryption

plaintext = input('Enter the text to encrypt: ', 's');
key = [ 1 0; 0 3];

ciphertext = hillencrypt(plaintext, key)
plaintext = hilldecrypt(ciphertext, key)
% Decryption
