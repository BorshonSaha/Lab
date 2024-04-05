#include<graphics.h>
int main()
{
    int gd=DETECT,gm,x,y;
    initgraph(&gd,&gm,"c:\\TC\\bgi");
    setbkcolor(WHITE);
    cleardevice();
    setcolor(BLACK);
    setlinestyle(0,0,3);
    outtextxy(300,150,"LINE()");
    line(350,60,200,200);
    outtextxy(300,300," CURRENT POSITION");
    linerel(320,350);
    outtextxy(335,315,"LINEREL()");
    outtextxy(30,30," CURRENT POSITION");
    lineto(30,200);
    outtextxy(70,45,"LINETO()");
    getch();
    closegraph();
}

