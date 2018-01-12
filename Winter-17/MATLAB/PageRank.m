% Full probability matrix 6x6
pM = [0 1/3 0 0 1/3 1/3; 0 0 1/3 0 1/3 0; 1 0 0 0.5 0 1/3; 0 1/3 0 0 0 1/3; 0 1/3 1/3 0 0 0; 0 0 1/3 0.5 1/3 0];

% Probabilty matrix for 0 clicks
pMn = [0; 1; 0; 0; 0; 0];

n = input('Enter the number of clicks: ');

for c = 1:n
% Probabilty matrix for req click
    pMn = pM * pMn;
end
max = 0;
    for j = 1:6
        if pMn(j, 1) > max
            max = pMn(j, 1);
            maxVisited = j;
        end
    end
%pMn
disp("Highest visited page: ")
maxVisited
max
