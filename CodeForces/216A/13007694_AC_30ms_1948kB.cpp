#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	printf("%d\n",(a*b*c)-((a-1)*(b-1)*(c-1)));
	
	
	return 0;
}