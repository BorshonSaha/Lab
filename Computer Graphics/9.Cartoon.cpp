#include <graphics.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    setbkcolor(WHITE);
    cleardevice();
    setcolor(BLACK);


    circle(230,102,90);
    circle(198,82,10);
    circle(260,80,10);

    ellipse(198,75,0,180,20,15);
    ellipse(260,73,0,180,20,15);
    ellipse(229,140,180,0,30,15);

    rectangle(168,198,288,348);

    line(198,184,198,198);
    line(266,184,266,198);
    line(290,200,362,170);
    line(170,200,80,170);

    line(190,350,156,422);
    line(270,350,296,422);

    getch();
    closegraph();

}
