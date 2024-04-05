#include<graphics.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    setbkcolor(WHITE);
    cleardevice();
    setcolor(BLACK);
    setbkcolor(WHITE);
    cleardevice();
    setcolor(BLACK);
    line(150, 150, 450, 150);
    line(150, 150, 300, 300);
    line(450, 150, 300, 300);

    getch();
    closegraph();
}

