#include<stdio.h>
int main()
{
		int dist;
		float dm,df,di,dc;
		printf("\n distance between two city");
		scanf("%d",&dist);
		dm=dist*1000;
		df=dist*3280.84;
		di=dist*39370.1;
		dc=dist*100000;
		printf("\n dm=%f,df=%f,di=%f,dc=%f",dm,df,di,dc);
		return 0;
}
