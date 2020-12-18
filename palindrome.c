#include<stdio.h>
int main()
{
		int n,num,temp,rev=0;
		printf("\n enter the number:");
		scanf("%d",&n);
		num=n;
		while(num!=0){
			temp=num%10;
			rev=rev*10+temp;
			num=num/10;
			
		}
		if(n==rev)
		{
			printf("\n %d is an palindrome number",n);
		}
		else
		{
			printf("\n %d is not an palindrome number",n);
		}
		return 0;
		
}
