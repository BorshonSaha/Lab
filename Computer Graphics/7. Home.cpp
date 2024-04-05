#include <graphics.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    setbkcolor(WHITE);
    cleardevice();
    setcolor(BLACK);
    setbkcolor(WHITE);

    //setfillstyle(4,5);
    line(38,150,96,78);
    line(96,78,150,150);
    line(38,150,150,150);
    //floodfill(96,79,0);

    line(96,78,282,78);
    line(282,78,330,150);
    line(150,150,330,150);

    line(150,150,150,270);
    line(38,150,38,240);
    line(38,240,150,270);
    line(330,150,330,240);
    line(150,270,330,240);

    //setfillstyle(3,5);
    //floodfill(282,79,0);

    rectangle(70,182,118,210);

    line(214,150,216,260);
    line(260,150,262,250);

    /**setfillstyle(1,7);
    floodfill(151,151,0);
    floodfill(329,151,0);
    floodfill(39,151,0);**/

    getch();
    closegraph();
}

