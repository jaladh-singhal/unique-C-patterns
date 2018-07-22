#include <stdio.h>
#include <windows.h>
void gotoxy(int x,int y)
{
	COORD c;
	c.X=x-1;
	c.Y=y-1;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
main()
{
	int i,j,a=40,b=41;
	char name[6]={'J','A','L','A','D','H'};		//Or~ Input whatever 6 character - string you want
	for(i=1;i<=6;i++)
	{
		gotoxy(a--,b++);
		for(j=1;j<=2*i-1;j++)
		{
			printf("o");
		}
	}
	Sleep(100);
	int k,x1=39,y1=40,x2=41,y2=40;
	for(k=1;k<=12;k++)
	{
		if(k<=5)
		{
			gotoxy(x1,y1);
			putchar(name[0]);
			x1-=3; y1--;
			gotoxy(x2,y2);
			putchar(name[5]);
			x2+=3; y2--;
		  	Sleep(100);	
		}
		else if(k==6 || k==7)
		{
			gotoxy(x1,y1);
			putchar(name[0]);
			x1-=3;
			gotoxy(x2,y2);
			putchar(name[5]);
			x2+=3;
		  	Sleep(100);
		}
		else
		{
			gotoxy(x1,y1);
			putchar(name[0]);
			x1-=3; y1++;
			gotoxy(x2,y2);
			putchar(name[5]);
			x2+=3; y2++;
		  	Sleep(100);	
		}	
	}
	
	int l,x3=39,y3=38,x4=41,y4=38;
	for(l=1;l<=13;l++)
	{
		if(l<=8)
		{
			gotoxy(x3,y3);
			putchar(name[1]);
			x3-=2; y3-=2;
			gotoxy(x4,y4);
			printf("D");
			x4+=2; y4-=2;
		  	Sleep(100);	
		}
		else if(l==9)
		{
			gotoxy(x3,y3);
			putchar(name[1]);
			x3-=3;
			gotoxy(x4,y4);
			printf("D");
			x4+=3;
		  	Sleep(100);
		}
		else
		{
			gotoxy(x3,y3);
			putchar(name[1]);
			x3-=3; y3+=2;
			gotoxy(x4,y4);
			putchar(name[4]);
			x4+=3; y4+=2;
		  	Sleep(100);	
		}	
	}
	
	int m,x5=39,y5=36,x6=41,y6=36;
	for(m=1;m<=15;m++)
	{
		if(m<=11)
		{
			gotoxy(x5,y5);
			putchar(name[2]);
			x5--; y5-=3;
			gotoxy(x6,y6);
			putchar(name[3]);
			x6++; y6-=3;
		  	Sleep(100);	
		}
		else if(m==12)
		{
			gotoxy(x5,y5);
			putchar(name[2]);
			x5-=4;
			gotoxy(x6,y6);
			putchar(name[3]);
			x6+=4;
		  	Sleep(100);
		}
		else
		{
			gotoxy(x5,y5);
			putchar(name[2]);
			x5-=4; y5+=3;
			gotoxy(x6,y6);
			putchar(name[3]);
			x6+=4; y6+=3;
		    Sleep(100);	
		}	
	}
	int n;
	for(n=1;n<=6;n++)
	{
		switch(n)
		{
			case 1: gotoxy(x1,y1);
			break;
			case 2: gotoxy(x3,y3);
			break;
			case 3: gotoxy(x5,y5);
			break;
			case 4: gotoxy(x6,y6);
			break;
			case 5: gotoxy(x4,y4);
			break;
			case 6: gotoxy(x2,y2);
			break;
		}
		printf("x");
		Sleep(200);
	}

	gotoxy(1,50);
}
