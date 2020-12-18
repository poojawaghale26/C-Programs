#include<stdio.h>
int main()
{
	int a[10];
	int i,secl,lag;
	printf("\n Input array elements:");
	lag=a[0];
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<10;i++)
	{
			if(a[i]>lag)
			{
		
				secl=lag;
				lag=a[i];
			}
			
		    else if(a[i]>secl&&a[i]<secl)
		    {
			
				secl=a[i];
			}
	}
	printf("\n second largest=%d",secl);
	return 0;
}
