PGraphics viewport;

void setup()
{
  size(500, 400, P3D);
  background(255);
}

void draw() 
{
  fill(122);
  line(0, 0, width, height);
  fill(0);
  
  rect(300, 300, 300, 60);
  triangle(100, 200, 300, 400, 500, 400);
  ellipse(100, 200, 400, 400);
}
