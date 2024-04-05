#include<stdio.h>
#include<graphics.h>
int  main()
{
    int gdriver = DETECT,gm;
    initgraph(&gdriver,&gm,"");
    setbkcolor(WHITE);
    cleardevice();
    setcolor(BLACK);
    rectangle(100,200,200,300);
    rectangle(150,250,250,350);
    line(100,200,150,250);
    line(200,300,250,350);
    line(100,300,150,350);
    line(200,200,250,250);
    getch();
    return 0;
    closegraph();

}

