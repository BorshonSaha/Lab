#include <graphics.h>
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    setbkcolor(WHITE);
    cleardevice();
    setcolor(BLACK);


    for(int i=0; i<500; i++)
    {
        circle(100+i, 250, 30);
        circle(300+i, 250, 30);

        line(100+i,250,300+i,250);
        line(100+i,250,100+i,150);
        line(300+i,250,300+i,150);
        line(100+i,150,300+i,150);
        line(100+i,200,300+i,200);
        line(200+i,150,200+i,200);
        line(250+i,150,250+i,200);
        line(150+i,150,150+i,200);

        delay(1);
        cleardevice();
    }


    getch();
    closegraph();

}
