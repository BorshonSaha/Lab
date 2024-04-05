#include <graphics.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    setbkcolor(WHITE);
    cleardevice();
    setcolor(BLACK);

    setfillstyle(1,2);
    line(150, 250, 450, 250);
    line(150, 50, 450, 50);
    line(150, 50, 150, 250);
    line(450, 50, 450, 250);
    line(150, 250, 150, 450);
    floodfill(151, 51, 0);

    setfillstyle(1,4);
    circle(300,150,50);
    floodfill(300,150,0);

    getch();
    closegraph();
}


