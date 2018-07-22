#include <stdio.h>
#include <string.h>
main()
{
	printf("Enter a String: ");
	char str[20];
	scanf("%s",str);
	int len=strlen(str);
	int w;
	if(len%2)
		w=(len+1)/2;
	else
		w=len/2+1;
	int i,j,k,l;
	for(i=1;i<=w;i++)
	{
		for(j=1;j<=w-i;j++)
			printf(" ");
		for(k=i-1;k<=2*i-3;k++)
			printf("%c",str[k]);
		for(l=2*i-2;l>=i-1;l--)
			printf("%c",str[l]);
		printf("\n");
	}
}
