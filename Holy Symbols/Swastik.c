#include <stdio.h>
main()
{
	int i,j,k;
	for(i=0;i<=6;i++)
	{
		if(i==0 || i==6)
		{
			for(k=0;k<=6;k++)
			{
				if(k==0 || k==6)
				printf("* ");
				else
				printf("  ");	
			}	
		}
		else
		{
		for(j=0;j<=5;j++)
		{
			if(j==0)
			{
				printf("  ");
				continue;
			}
			if(i%2==0)
			{
				if(j==i-1 || j==i+1)
				printf("* ");
				else
				printf("  ");
			}
			else if(i==3)
			{
				printf("* ");
			}
			else
			{
				if(j==(i+3)/2)
				printf("  ");
				else
				printf("* ");
			}
		}
		}
		printf("\n");
	}	
}
