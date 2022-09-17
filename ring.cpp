// B29 Chinmay Kotkar		

#include<iostream>
#include<graphics.h>

int main(){
int gd = DETECT;
int gm;
initgraph(&gd,&gm,NULL);
circle(100,100,50);
delay(5000);
closegraph();
return 0;

}
