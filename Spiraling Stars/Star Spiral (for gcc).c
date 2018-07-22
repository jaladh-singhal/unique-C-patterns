#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
void gotoxy(int x, int y)
{
  COORD c;
  c.X = x - 1;
  c.Y = y - 1;
  SetConsoleCursorPosition (GetStdHandle(STD_OUTPUT_HANDLE), c);
}
main()
{
	//Enter both width and length either even or odd to maintain spacing btw horz. & vert. rows (h-=2 & v-=2)
	int h,v;
	printf("NOTE: It will be better if you enter both width and length an even no.\n");
	printf("Enter width ( <=40 ): ");
	scanf("%d",&h);
	printf("Enter length ( <=56 ): ");
	scanf("%d",&v);
	system("cls");
	int x=-1, y=1, a=1, b=v+2;
	int i,j,k,l;
	while(a!=0)
	{
	for(i=1;i<=h;i++)
	{
		x+=2;           // to give space btw horz. stars
		gotoxy(x,y);
		printf("*");
	}
	Sleep(400);
	if(h<1) break;      // so that spiral quits as soon as h<=0 & *---don't try to run other three loops i.e j,k,l---*
	h-=2;	            // to bring space btw 2 vert. rows
	for(j=1;j<=v;j++)
	{
		y++;
		gotoxy(x,y);
		printf("*");
	}
	Sleep(400);	
	if(v<1) break;
	v-=2;	            // to bring space btw 2 horz. rows
	for(k=1;k<=h;k++)
	{
		x-=2;
		gotoxy(x,y);
		printf("*");
	}
	Sleep(400);
	if(h<1) break;
	h-=2;
	for(l=1;l<=v;l++)
	{
		y--;
		gotoxy(x,y);
		printf("*");
	}
	Sleep(400);
	if(v<1) break;
	v-=2;
    }
	gotoxy(1,b);
}

