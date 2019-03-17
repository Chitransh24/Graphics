#include<graphics.h>
main()
{
    int i,gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    for(i=0;i<=290;i++)
    {
    int car[]={110+i,380,110+i,330,160+i,280,300+i,280,350+i,330,350+i,380,110+i,380};
    cleardevice();
    drawpoly(7,car);
    line(0,420,640,420);
    line(110+i,330,350+i,330);
    line(160+i,280,160+i,330);
    line(300+i,280,300+i,330);
    circle(160+i,400,20);
    circle(300+i,400,20);
    outtextxy(140+1.4\*i,350,"@Chitransh69");
    outtextxy(160,80,"Move Like a Bullet and Pierce the Surrounding...");
    delay(7);
    }
    outtextxy(160,80,"Move Like a Bullet and Pierce the Surrounding...");
    getch();
    closegraph();
}

