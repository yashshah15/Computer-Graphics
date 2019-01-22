
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
float x1,y1,x2,y2,x,y,dx,dy,len;
int i,gd=DETECT,gm;
void main()
{
	clrscr();
	printf("\nEnter 2 points");
	scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	dx=x2-x1;
	dy=y2-y1;
	if(dx>dy)
	{
		len=dx;
	}
	else
	{
		len=dy;
	}
	dx=dx/len;
	dy=dy/len;
	x=x+0.5;
	y=y+0.5;
	i=0;
	while(i<=len)
	{
		putpixel(x,y,2);
		x=x+dx;
		y=y+dy;
		i++;
	}
	circle(320,240,50);
	circle(320,240,75);
	circle(320,240,100);
	floodfill(380,240,getmaxcolor());
	getch();
	closegraph();
}