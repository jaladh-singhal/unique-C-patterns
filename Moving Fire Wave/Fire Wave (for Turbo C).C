#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
	int x,y,inc,ltail=-51,rtail=0;
	char c;
	while(ltail<=81)
	{
		clrscr();
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
		delay(100);
		rtail++;
		ltail++;
	}
	getch();
}
