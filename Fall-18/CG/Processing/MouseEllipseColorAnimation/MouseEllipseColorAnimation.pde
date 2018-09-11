void setup()
{
  size(800, 600, P3D);
  background(255);
}

void draw()
{
  translate(mouseX - 50, mouseY - 50);
  fill(mouseX % 255, mouseY % 255, mouseX * mouseY % 255);
  noStroke();
  ellipse(50, 50, 50, 50);
  click();
}

void click()
{
  if (mousePressed)
  background(mouseX % 255, mouseY % 255, mouseX * mouseY % 255);
  
}
