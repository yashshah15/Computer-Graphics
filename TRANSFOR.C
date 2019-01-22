#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
float x1,x2,x3,x4,y1,y2,y3,y4,a,t1,t2;
int gd=DETECT,gm,ch,tx,ty;
void main()
{
	clrscr();
	printf("\nEnter the coordinates of the rectangle");
	scanf("%f%f%f%f%f%f%f%f",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	line(x1,y1,x2,y2);
	line(x2,y2,x3,y3);
	line(x3,y3,x4,y4);
	line(x4,y4,x1,y1);
	printf("\n1.Translate\n2.Rotate\n3.Scale\n4.x-Shear\n5.y-Shear");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
		printf("\nEnter translational distances along x and y axis");
		scanf("%d%d",&tx,&ty);
		x1+=tx;
		x2+=tx;
		x3+=tx;
		x4+=tx;
		y1+=ty;
		y2+=ty;
		y3+=ty;
		y4+=ty;
		break;
		case 2:
		printf("\nEnter the angle of rotation");
		scanf("%f",&a);
		a=a*3.14/180;
		tx=x1;
		ty=y1;
		x1-=tx;
		x2-=tx;
		x3-=tx;
		x4-=tx;
		y1-=ty;
		y2-=ty;
		y3-=ty;
		y4-=ty;
		t1=x1;
		t2=y1;
		x1=t1*cos(a)-(t2*sin(a));
		y1=t1*sin(a)+(t2*cos(a));
		t1=x2;
		t2=y2;
		x2=t1*cos(a)-(t2*sin(a));
		y2=t1*sin(a)+(t2*cos(a));
		t1=x3;
		t2=y3;
		x3=t1*cos(a)-(t2*sin(a));
		y3=t1*sin(a)+(t2*cos(a));
		t1=x4;
		t2=y4;
		x4=t1*cos(a)-(t2*sin(a));
		y4=t1*sin(a)+(t2*cos(a));
		x1+=tx;
		x2+=tx;
		x3+=tx;
		x4+=tx;
		y1+=ty;
		y2+=ty;
		y3+=ty;
		y4+=ty;
		break;
		case 3:
		printf("\nEnter the scaling factor for x & y coordinate");
		scanf("%d%d",&tx,&ty);
		x1*=tx;
		x2*=tx;
		x3*=tx;
		x4*=tx;
		y1*=ty;
		y2*=ty;
		y3*=ty;
		y4*=ty;
		break;
		case 4:
		printf("\nEnter the shearing factor");
		scanf("%f",&t1);
		x1+=(t1*y1);
		x2+=(t1*y2);
		x3+=(t1*y3);
		x4+=(t1*y4);
		break;
		case 5:
		printf("\nEnter the shearing factor");
		scanf("%f",&t2);
		y1+=(t2*x1);
		y2+=(t2*x2);
		y3+=(t2*x3);
		y4+=(t2*x4);
		break;
	}
	line(x1,y1,x2,y2);
	line(x2,y2,x3,y3);
	line(x3,y3,x4,y4);
	line(x4,y4,x1,y1);
	getch();
	closegraph();
}