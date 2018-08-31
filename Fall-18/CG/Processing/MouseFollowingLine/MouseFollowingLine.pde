void setup()
{
  size(800, 600, P3D);
  background(255);
}

void draw()
{
  pushMatrix();
  translate(400, 300);
  line(400, 300, mouseX, mouseY);
  popMatrix();
}
