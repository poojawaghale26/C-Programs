#include<stdio.h>
int main()
{
	int n,i,j,k;
	printf("\n enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
			for(k=1;k<=i;k++)
			{
					printf("");
			}
			for(j=1;j<=11-2*i;k++)
			{
					printf("*");
			}
		
	}
	return 0;
}
