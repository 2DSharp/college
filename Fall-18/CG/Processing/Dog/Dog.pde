PGraphics viewport;

void setup()
{
  size(700, 300, P3D);
}

void draw() 
{
  fill(0);
  rect(350, 150, 155, 70, 7);
  rect(350+155, 150+10, 50, 30, 7);
  line(350, 150, 250, 100);
  line(380, 150+70, 380, 150+100);
  line(470, 150+70, 470, 150+100);

}
