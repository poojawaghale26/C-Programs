#include<stdio.h>
int main()
{
	int a[5];
	int i,max,min;
	printf("\n Input array elements:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	min=a[0];
	for(i=0;i<5;i++)
	{
		if(a[i]>max)
			max=a[i];
		
		if(a[i]<min)
			min=a[i];
	}
				
	printf("\n max number is %d",max);
	printf("\n min number is %d",min);
	
	return 0;
}
