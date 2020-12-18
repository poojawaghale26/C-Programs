#include<stdio.h>
int main()
{
	int a[107];
	int i,j,n,flag=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)	
			{
				if(a[i]>a[j])
					flag=1;
				else
				{
					flag=0;
					break;
				}	
			}
				if(flag==1||i==n-1)
					printf("%d ",a[i]);
			
		}
		return 0;
}
