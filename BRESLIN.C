#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int gd=DETECT,gm,i;
float x1,x2,y1,y2,e,dx,dy,x,y;
void main()
{
	clrscr();
	printf("\nEnter the endpoints of line");
	scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	dx=x2-x1;
	dy=y2-y1;
	e=2*dy-dx;
	x=x1;
	y=y1;
	for(i=1;i<dx;i++)
	{
		putpixel(x,y,12);
		while(e>=0)
		{
			y++;
			e=e-2*dx;
		}
		delay(100);
		x++;
		e=e+2*dy;
	}
	getch();
	closegraph();
}