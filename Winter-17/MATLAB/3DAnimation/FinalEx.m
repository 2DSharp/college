function FinalEx

close all

fig = figure;

fig.UserData.firstPerson = false; %do we start in 1st person view, or not?
resetPositionOnBounds = true; %keeps the plane in the region with the matlab logo ground.

hold on
fig.Position = [600 600 1500 1200];
%Disable axis viewing, don't allow axes to clip the plane, turn on
%perspective mode.
fig.Children.Visible = 'off';
fig.Children.Clipping = 'off';
fig.Children.Projection = 'perspective';

% Add the sky - Fancy environment folder ex
skymap = [linspace(1,0.4,100)',linspace(1,0.4,100)',linspace(1,0.99,100)'];

[skyX,skyY,skyZ] = sphere(50);
sky = surf(500000*skyX,500000*skyY,500000*skyZ,'LineStyle','none','FaceColor','interp');
colormap(skymap);

% Add the plane - Fancy planes folder
fv = stlread('car.stl');
p1 = patch(fv,'FaceColor','red', 'EdgeColor','none','FaceLighting','gouraud','AmbientStrength', 0.15);
vert = p1.Vertices;

material('metal')




% Add the ground + textures - Fancy environments folder Ex
texture = imread('road1.jpg');

ground = 10000*membrane(1,40)-10000;
groundSurf.FaceColor = 'texturemap';
groundSurf.CData = texture;

%add some extra flat ground going off to (basically) infinity.
flatground = surf(linspace(-500000,500000,size(ground,1)),linspace(-500000,500000,size(ground,2)),-10001*ones(size(ground)));
flatground.FaceColor = 'texturemap';
flatground.CData = texture;
flatground.AlphaData = 0.8;

camlight('headlight');

camva(40); %view angle

% Set keyboard callbacks and flags for movement.
set(fig,'WindowKeyPressFcn',@KeyPress,'WindowKeyReleaseFcn', @KeyRelease);
        fig.UserData.e = false;
         fig.UserData.q = false;
         


forwardVec = [1 0 0]'; %Vector of the plane's forward direction in plane frame
rot = eye(3,3); %Initial plane rotation
pos = [-8000,8000,-2000]; %Initial plane position
vel = 200; %Velocity

hold off
axis([-10000 10000 -10000 10000 -10000 10000])


% Animation loop:
tic
told = 0;
while(ishandle(fig))
  tnew = toc;
  
  %Check for user inputs:
  if fig.UserData.e
      rot = rot*angle2dcm(0.5,0,0);
  elseif fig.UserData.q
      rot = rot*angle2dcm(-0.5,0,0);
  end
  
  
  %Update plane's center position.
  pos = vel*(rot*forwardVec*(tnew-told))' + pos;
  
  %If the plane wants to go under the ground, then bring it back up to the
  %ground surface.
  
  
  
  %Update the plane's vertices using the new position and rotation
  p1.Vertices = (rot*vert')' + repmat(pos,[size(vert,1),1]);
  
  
  %Camera updates:
  if fig.UserData.firstPerson %First person view -- follow the plane from slightly behind.
      camupvec = rot*[0 0 1]';
      camup(camupvec);
      campos(pos' - 1000*rot*[1 0 -0.25]');
      camtarget(pos' + 100*rot*[1 0 0]');    
  else %Follow the plane from a fixed angle
    campos(pos + [-300,300,100]);%3000*abs(pos-campos)/norm(pos-campos));
    camtarget(pos);

  end
  
     cam = campos;
    %Also keep the camera from going into the ground (could be done a
    %smarter way to also not look through the ground).
     
  
    told = tnew;
    pause(0);
    
end
end


function KeyPress(varargin)
     fig = varargin{1};
     key = varargin{2}.Key;
     if strcmp(key,'e') 
         fig.UserData.e = true;
     elseif strcmp(key,'q')
         fig.UserData.q = true;
     end
end

function KeyRelease(varargin)
     fig = varargin{1};
     key = varargin{2}.Key;
     if strcmp(key,'e') 
         fig.UserData.e = false;
     elseif strcmp(key,'q')
         fig.UserData.q = false;
     end
end