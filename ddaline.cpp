//Chinmay Kotkar SE B 29

#include <iostream>
#include <graphics.h>
#include <math.h>
using namespace std;

int main()
{
	float i,x,y,x1,y1,x2,y2,length,DX,DY;
	cout<<"Enter x1 coordinate: ";
	cin>>x1;
	cout<<"Enter x2 coordinate: ";
	cin>>x2;
	cout<<"Enter y1 coordinate: ";
	cin>>y1;
	cout<<"Enter y2 coordinate: ";
	cin>>y2;
	
	int gd = DETECT;
	int gm;
	initgraph(&gd,&gm,NULL);
	
	if (abs(x2-x1)>=abs(y2-y1))
	{
		length = abs(x2-x1);
	}
	else
	{
		length = abs(y2-y1);
	}
	
	DX = (x2-x1)/length;
	DY = (y2-y1)/length;;
	x = x1 + 0.5;
	y = y1 + 0.5;
	i = 1;
	
	while(i <=length)
	{
		putpixel(int(x),int(y),15);
		x = x + DX;
		y = y + DY;
		i = i + 1;
	}
	delay(10000);
	closegraph();
	return 0;
	
	
}
	
