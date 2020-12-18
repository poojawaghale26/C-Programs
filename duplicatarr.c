#include<stdio.h>
int main()
{
	int a[20];
	int i,j,k,size;
	printf("\n Enter the size of an array:");
	scanf("\%d",&size);
	printf("\n Enter the element of an array:");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(a[i]==a[j])
			{
				for(k=j;k<size;k++)	
				{
					a[k]=a[k+1]	;	
				}
				size--;
				j--;
			}
	
		}
	}

	for(i=0;i<size;i++)
	{
		printf("%d",a[i]);	
	}
	return 0;

	
			
	
}
