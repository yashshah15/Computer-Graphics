#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
int gd=DETECT,gm,i=0;
float x,y,e,r,ox,oy,x1,y1;
void main()
{
	clrscr();
	printf("\nEnter the coordinates of centre");
	scanf("%f%f",&ox,&oy);
	printf("\nEnter the radius of circle");
	scanf("%f",&r);
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	while(r>pow(2,i))
	{
		i++;
	}
	e=1/pow(2,i);
	x=0;
	y=r;
	x1=x;
	y1=y;
	do
	{
		putpixel(ox+x1,oy+y1,10);
		x1+=e*y1;
		y1-=e*x1;
		delay(100);
	}while((y-y1>0)||(x-x1<0));
	getch();
	closegraph();
}