#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    int c;
    int x = 200, y = 100;
    initgraph(&gd, &gm, "");
    setbkcolor(WHITE);
    cleardevice();
    setcolor(BLACK);
    for ( c = 0 ; c < 5 ; c++ )
    {
        setlinestyle(c, 0, 1);
        line(x, y, x+200, y);
        y = y + 25;
    }
    getch();
    closegraph();
    return 0;
}

