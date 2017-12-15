img = imread('Color2.jpg');
w = imshow(img);
size(w);

img2 = 255-img(:, end:-1:1,:);
imshow(rgb2gray(img2)*2);
imshow((img2)*2);
whos img;