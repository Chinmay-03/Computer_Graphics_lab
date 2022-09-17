#include <iostream>
#include <graphics.h>


int main()
{

int gd = DETECT;
int gm;
initgraph(&gd,&gm,NULL);
//circle (x,y,radius)
circle(300,300,70);
//rectangle(left,top,right,bottom)
rectangle(200,200,400,400);
//line(x1,y1,x2,y2)
line(300,200,200,300);
line(300,200,400,300);
line(200,300,300,400);
line(400,300,300,400);
outtextxy(50,50,"SE B 29 Chinmay Kotkar");

delay(5000);
closegraph();
return 0;
}
