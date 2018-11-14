ry = 0


def setup():
    size(800, 800, P3D)
    global obj, texture1
    texture1 = loadImage("texture.jpg")
    obj = loadShape("man.obj")

def draw():
    global ry
    background(0)
    lights()

    translate(width / 2, height / 2 + 200, -200)
    rotateZ(PI)
    rotateY(ry)
    scale(25)
    
    # Orange point light on the right
    pointLight(150, 100, 0,   # Color
               200, -150, 0)  # Position
    # Blue directional light from the left
    directionalLight(0, 102, 255,  # Color
                     1, 0, 0)      # The x-, y-, z-axis direction
    # Yellow spotlight from the front
    spotLight(255, 255, 109,  # Color
              0, 40, 200,     # Position
              0, 10, 5,  # Direction
              90, 2)      # Angle, concentration
    ambientLight(255, 0, 0);
    
    texture(texture1)
    shape(obj)
    box(100, 100, 200)

    ry += 0.02
