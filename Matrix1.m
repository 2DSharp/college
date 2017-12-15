clc
clear all

A = [-2 3 4 7; 2 -2 3 5; 1 -1 0 3; 2 4 5 6];

% Two ways to find an element in a matrix
A(2,2);
A(6);

% Find determinant
dA = det(A);

% A transpose
tA = transpose(A);

% Find A inverse
iA = inv(A);

% 3rd column
column3 = A(:,3);

% 4th row
row4 = A(4,:);

B = [ 0 1 2 0; 3 1 0 0; 2 3 -5 7; 8 9 1 3];

% Matrix algebra

res1 = 2 * A + 3 * B;

res2 = A^2 + B^2;

% Flip?
flipud(B); % Up and down


fliplr(B); % Left and right

rot90(B) ; % Anticlockwise rotation

C = [1 2 3 4 5; 8 7 8 9 6; 2 5 4 6 8; 1 2 3 7 9]

% Reshaping to new order
reshape(C, 2, 10)
reshape(C, 5, 4) 