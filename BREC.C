#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int gd=DETECT,gm;
float r,ox,oy,d,x,y;
void main()
{
	clrscr();
	printf("\nEnter the coordinates of centre");
	scanf("%f%f",&ox,&oy);
	printf("\nEnter the radius of circle");
	scanf("%f",&r);
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	d=3-2*r;
	x=0;
	y=r;
	do
	{
		putpixel(ox+x,oy+y,10);
		putpixel(ox+y,oy+x,11);
		putpixel(ox+y,oy-x,12);
		putpixel(ox+x,oy-y,13);
		putpixel(ox-x,oy-y,14);
		putpixel(ox-y,oy-x,15);
		putpixel(ox-y,oy+x,9);
		putpixel(ox-x,oy+y,8);
		if(d<0)
		{
			d=d+4*x+6;
			x++;
		}
		else
		{
			d=d+(4*(x-y))+10;
			x++;
			y--;
		}
		delay(100);
	}while(x<y);
	getch();
	closegraph();
}