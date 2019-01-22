#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int x1,x2,x3,x4,y1,y2,y3,y4,gd=DETECT,gm,lx1,ly1,lx2,ly2,i,flag;
struct point
{
	 int x;
	 int y;
	 char code [4];
}p1,p2;
struct point setcode(struct point p)
{
	for(i=0;i<4;i++)
	{
		p.code[i]='0';
	}
	if(p.x<x1)
	{
		p.code[0]='1';
	}
	if(p.x>x2)
	{
		p.code[1]='1';
	}
	if(p.y>y4)
	{
		p.code[2]='1';
	}
	if(p.y<y1)
	{
		p.code[3]='1';
	}
	return p;
}
int visibility(struct point m,struct point n)
{
	int f=0;

	for(i=0;i<4;i++)
	{
		if(m.code[i]=='0' && n.code[i]=='0')
		{
			flag=0;
		}
		else
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		for(i=0;i<4;i++)
		{
			if(m.code[i]==n.code[i]=='1'||m.code[i]==n.code[i]=='0')
			{
				f=1;
			}
			else
			{
				f=2;
				break;
			}
		}
	}
       return f;
}           //display file and its stucture
struct point refresh(struct point a)
{
	if(a.x<100)
	{
		a.x=100
	}
	else if(a.x>400)
	{
		a.x=400;
	}
	if(a.code[0]=='1' || a.code[1]=='1')
	{
	}
}
void main()
{
	clrscr();
	printf("\nEnter the cordinates of 1 corner");
	scanf("%d%d",&x1,&y1);
	printf("\nEnter the cordinates of 2 corner");
	scanf("%d%d",&x2,&y2);
	printf("\nEnter the cordinates of 3 corner");
	scanf("%d%d",&x3,&y3);
	printf("\nEnter the cordinates of 4 corner");
	scanf("%d%d",&x4,&y4);
	printf("\nEnter the end point of line");
	scanf("%d%d",&p1.x,&p1.y);
	p1=setcode(p1);
	printf("\nEnter the end point of line");
	scanf("%d%d",&p2.x,&p2.y);
	p2=setcode(p2);
	flag=visibility(p1,p2);
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	line(x1,y1,x2,y2);
	line(x2,y2,x3,y3);
	line(x3,y3,x4,y4);
	line(x4,y4,x1,y1);
	if(flag==0)
	{
		line(p1.x,p1.y,p2.x,p2.y);
	}
	else
	{
		printf("\nline completely invisible");
	}
	getch();
	closegraph();
}