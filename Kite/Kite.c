#include <stdio.h>
main()
{
	int n;
	printf("Enter the width of Kite (An odd no. < 40): ");
	scanf("%d",&n);
	int i,j,k,l,x=1;
	for(i=1;i<=2*(n-1);i++)
	{
		if(i<=(n+1)/2)
		{
			for(j=1;j<=((n+1)/2)-i;j++)
			{
				printf("  ");
			}
			for(k=1;k<=2*i-1;k++)
			{
				if(k==1 || k==i || k==2*i-1 || i==(n+1)/2)
				{
					printf("* ");
				}
				else
				{
					printf("  ");
				}
			}
	   	}
	   	else
	   	{
	   		x++;
			for(l=1;l<=2*n-1;l++)
			{
				if(i==2*(n-1))
				{
					if(l<=x && l>=2*n-x)
					{
						printf("*");	
					}
					else
					{
						printf(" ");
					}	
				}
				else
					{
					if(l==x || l==n || l==2*n-x)
					{
						printf("*");	
					}
					else
					{
						printf(" ");
					}
				}
			}	
		}
		printf("\n");
	}
	
}
