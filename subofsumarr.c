#include<stdio.h>
int main()
{
	int a[100];
	int t,n,s,i,j,st=0,ep=0,temp;
	scanf("%d",&t);
	do
	{
		scanf("%d%d",&n,&s);
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
			
			for(i=0;i<n;i++)
			{
				temp=a[i];
				st=i+1;
				for(j=i+1;j<n;j++)
				{
					temp=temp+a[j];
					if(temp==s)
					{
						ep=j+1;
						printf("\n %d %d",st,ep);
						break;
			    	}
			    	if(temp>s)
			    	{
			    		break;	
					}
			    }
			}
		
		t--;
		}while(t>0);
		return 0;
	
}

