void setup()
{
  size(800, 600, P3D);
  background(255);
}

void draw()
{
  pushMatrix();
  translate(400, 300);
  rotate(mouseX * mouseY % 360);
  fill(255, 0, 0);
  sphere(100);
  popMatrix();
}
