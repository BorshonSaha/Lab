#include <graphics.h>
int main()
{
    int gd = DETECT, gm;
    int left = 150, top = 150;
    int right = 450, bottom = 450;
    initgraph(&gd, &gm, "");
    setbkcolor(WHITE);
    cleardevice();
    setcolor(BLACK);
    rectangle(left, top, right, bottom);
    getch();
    closegraph();
    return 0;
}

