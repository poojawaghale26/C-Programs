#include<stdio.h>
int main()
{
	int a[10];
	int i,even=0,odd=0,size;
	printf("\n Enter the size of an array;");
	scanf("%d",&size);
	printf("\n Enter the elements of the array:");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++)
	{
			if(a[i]%2==0)
			{
				even++;	
			}
			else
			{
				odd++;
			}
	}
	printf("\n Total Number of Even Numbers in this Array=%d",even);
	printf("\n Total Number of Odd Numbers in this Array=%d",odd);
	return 0;
}
