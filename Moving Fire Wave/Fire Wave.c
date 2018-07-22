#include<stdio.h>
#include<dos.h>
#include<windows.h>
void gotoxy(int x, int y)
{
  COORD c;
  c.X = x - 1;
  c.Y = y - 1;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

void main()
{
	int x,y,inc,ltail=-51,rtail=0;
	char c;
	while(ltail<=81)
	{
		system("cls");
		x=1,y=5,inc=0;
		while(x<=80)
		{
			gotoxy(x,y);
			if(x>=ltail && x<=rtail)
			{
				if(x%2)
					c=')';
				else
					c='(';
			}
			else
				c=' ';
			printf("%c",c);
			if(inc)
			{
				y++;
				if(y==11)
				{
					inc=0;
					y-=2;
				}
			}
			else
			{
				y--;
				if(y==0)
				{
					inc=1;
					y+=2;
				}
			}
			x++;
		}
		Sleep(100);
		rtail++;
		ltail++;
	}
}
