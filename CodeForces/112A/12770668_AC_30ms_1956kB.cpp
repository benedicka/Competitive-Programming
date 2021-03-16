#include<stdio.h>
#include<ctype.h>
#include<string.h>


int main()
{
	char x[1000],y[1000];
	scanf("%s",x);
	scanf("%s",y);

	
	if(strcmpi(x,y)>0) printf("1");
	else if (strcmpi(x,y)<0) printf("-1");
	else if(strcmpi(x,y)==0)printf("0");
	
	
	return 0;
}