#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int gd=DETECT,gm;
float dx,dy,x1,y1,x2,y2,len,i;
int j=0;
void main()
{
	clrscr();
	printf("\nEnter the end points of line");
	scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
	dx=x2-x1;
	dy=y2-y1;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
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
	for(i=1,j=1;i<=len;i++,j++)
	{
		if(j%5!=0)
		{
			putpixel(x1,y1,14);

			delay(100);
		}
		x1+=dx;
		y1+=dy;
	}
	getch();
	closegraph();
}