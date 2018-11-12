float x = 0.0;
float y = 200;
float speed = 1.0;

void setup()
{
  size(800, 600, P3D);
  background(255);
}

void draw()
{
  background(255);
  move();
  display();
}

void move()
{
  x += speed;
  if (x > width) {
    x = 0;
  }
}

void display()
{
  fill(0);
  rect(x, y, 80, 40);
}
