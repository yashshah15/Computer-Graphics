#include<stdio.h>
#include<conio.h>
#include<graphics.h>
float r,x,y,d,ox,oy;
int gd=DETECT,gm;
void main()
{
	clrscr();
	printf("\nEnter coordinates of centre");
	scanf("%f%f",&ox,&oy);
	printf("\nEnter the radius");
	scanf("%f",&r);
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	x=0;
	y=r;
	d=1.25-r;
	do
	{
		putpixel(ox+x,oy+y,12);
		putpixel(ox+y,oy+x,12);
		putpixel(ox+y,oy-x,12);
		putpixel(ox+x,oy-y,12);
		putpixel(ox-x,oy-y,12);
		putpixel(ox-y,oy-x,12);
		putpixel(ox-y,oy+x,12);
		putpixel(ox-x,oy+y,12);
		if(d<=0)
		{
			d=d+2*x+3;
			x++;
			y=y;
		}
		else
		{
			d=d+2*x-2*y+5;
			x++;
			y--;
		}
		delay(100);
	} while(x<y);
	getch();
	closegraph();
}
