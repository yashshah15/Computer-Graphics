#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int gd=DETECT,gm;
float d1,d2,dy,dx,ry,rx,ox,oy,x,y;
void main()
{
	clrscr();
	printf("\nEnter the radius along y and x axis");
	scanf("%f%f",&ry,&rx);
	printf("\nEnter the coordinates oforigin");
	scanf("%f%f",&ox,&oy);
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	d1=(ry*ry)+((ry-0.5)*(ry-0.5)*rx*rx)-(rx*rx*ry*ry);
	x=0;
	y=ry;
	do
	{
		dy=2*x*ry*ry;
		dx=2*y*rx*rx;
		putpixel(ox+x,oy+y,11);
		putpixel(ox+x,oy-y,12);
		putpixel(ox-x,oy-y,13);
		putpixel(ox-x,oy+y,14);
		if(d1<0)
		{
			d1=d1+(2*ry*ry*x)+(3*ry*ry);
			x++;
		}
		else
		{
			d1=d1+(2*ry*ry*x)+(3*ry*ry)-(2*rx*rx*y)+(2*rx*rx);
			x++;
			y--;
		}
	}while(dy<dx);
	d2=(ry*ry*(x+0.5)*(x+0.5))+(rx*rx*(y-1)*(y-1))-(rx*rx*ry*ry);
	do
	{
		putpixel(ox+x,oy+y,7);
		putpixel(ox+x,oy-y,8);
		putpixel(ox-x,oy-y,9);
		putpixel(ox-x,oy+y,10);
		if(d2>0)
		{
			d2=d2-(2*rx*rx*y)+(3*rx*rx);
			y--;
		}
		else
		{
			d2=d2-(2*rx*rx*y)+(2*ry*ry*x)+(2*rx*rx)+(ry*ry);
			x++;
			y--;
		}
	}while(y>0);
	getch();
	closegraph();
}