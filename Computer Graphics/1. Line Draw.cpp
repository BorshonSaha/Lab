/**#include <graphics.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    //setbkcolor(WHITE);
    //cleardevice();
    //setcolor(BLACK);
    //setbkcolor(WHITE);
    line(150, 150, 450, 150);
    getch();
    closegraph();
}**/

#include <graphics.h>
int main()
{
  int gd = DETECT, gm, c , x = 100, y = 50;

  initgraph(&gd, &gm, "C:\\TC\\BGI");

  for (c = 0; c < 5; c++)
  {
    setlinestyle(c, 100, 2);

    line(x, y, x+200, y);
    y = y + 25;
  }

  getch();
  closegraph();
  return 0;
}

