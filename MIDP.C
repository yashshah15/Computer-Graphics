#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<string.h>
int gd=DETECT,gm,i,flag;
struct point
{
	int x;
	int y;
	char code[4];
}p1,p2;
struct point setcode(struct point p)
{
	for(i=0;i<4;i++)
	{
		p.code[i]='0';
	}
	if(p.x<100)
	{
		p.code[0]='1';
	}
	if(p.x>400)
	{
		p.code[1]='1';
	}
	if(p.y>400)
	{
		p.code[2]='1';
	}
	if(p.y<100)
	{
		p.code[3]='1';
	}
	return p;
}
int visibility(struct point a,struct point b)
{
	int f;
	for(i=0;i<4;i++)
	{
		if(a.code[i]==b.code[i]=='0')
		{
			f=1;
		}
		else
		{
			f=-1;
			break;
		}
	}
	if(f==-1);
	{
		for(i=0;i<4;i++)
		{
			if((a.code[i]==b.code[i]=='1')||(a.code[i]==b.code[i]=='0'))
			{
				f=2;
			}
			else
			{
				f=3;
			}
		}
	}
	return f;
}
void midpoint(struct point m,struct point n)
{
	struct point mid;
	m=setcode(m);
	n=setcode(n);
	flag=visibility(m,n);
	switch(flag)
	{
		case 1:
		line(m.x,m.y,n.x,n.y);
		break;
		case 2:
		break;
		case 3:
		mid.x=m.x+(n.x-m.x)/2;
		mid.y=m.y+(n.y-n.x)/2;
		midpoint(m,mid);
		mid.x++;
		mid.y++;
		midpoint(mid,n);
		break;
	}
}
void main()
{
	clrscr();
	printf("\nEnter the end points of line");
	scanf("%d%d%d%d",&p1.x,&p1.y,&p2.x,&p2.y);
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	rectangle(100,100,400,400);
	midpoint(p1,p2);
	getch();
	closegraph();
}