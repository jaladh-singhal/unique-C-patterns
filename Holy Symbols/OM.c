#include <stdio.h>
#include <windows.h>
void gotoxy(int x, int y)
{
  COORD c;
  c.X = x - 1;
  c.Y = y - 1;
  SetConsoleCursorPosition (GetStdHandle(STD_OUTPUT_HANDLE), c);
}
main()
{
	int h;
	for(h=5;h<=11;h+=6)
	{
		gotoxy(1,h);
		printf("*");
	}
	int i,j,x=4;
	for(i=1;i<=3;i++)
	{
		gotoxy(2,x);
		for(j=1;j<=3;j++)
		{
			printf("* ");
		}
		x+=4;
	}
	int k,y=5;
	for(k=1;k<=4;k++)
	{
		gotoxy(7,y);
		printf("*");
		y+=2;
	}
	int l,z=6;
	for(l=1;l<=3;l++)
	{
		gotoxy(8,z);
		printf("*");
		z+=2;
	}
	int m;
	for(m=2;m<=3;m++)
	{
		gotoxy(10,m);
		printf("*");
	}
	int n,o,a=14,b=1;
	for(o=1;o<=2;o++)
	{	
		for(n=1;n<=3;n++)
		{
			gotoxy(a--,b++);
			printf("*");
		}
		a=17,b=8;
	}
	int p,c=13,d=5;
	for(p=1;p<=4;p++)
	{
		gotoxy(c--,d++);
		printf("*");
	}
	int q,r,e=6,f=1;
	for(r=1;r<=2;r++)
	{
		for(q=1;q<=3;q++)
		{
			gotoxy(e++,f++);
			printf("*");
		}
		e=15,f=5;
	}
	gotoxy(13,10);
	printf("*");
	gotoxy(1,13);
}
