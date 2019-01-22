#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
int gd=DETECT,gm;
float tx,ty,x1,y1,x2,y2,a,t1,t2;
void main()
{
	clrscr();
	printf("\nEnter the end point s of line");
	scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
	printf("\nEnter the rotational angle");
	scanf("%f",&a);
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	line(x1,y1,x2,y2);
	a=a*3.14/180;
	tx=x1;
	ty=y1;
	t1=x2;
	t2=y2;
	x1-=tx;
	x2-=tx;
	y1-=ty;
	y2-=ty;
	t1=x2;
	t2=y2;
	x2=t1*cos(a)-(t2*sin(a));
	y2=t1*sin(a)+(t2*cos(a));
	x1+=tx;
	x2+=tx;
	y1+=ty;
	y2+=ty;
	line(x1,y1,x2,y2);
	getch();
	closegraph();
}