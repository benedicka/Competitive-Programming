#include<stdio.h>
int main()
{
	int t,a,b,c,d;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d %d %d",&a,&b,&c,&d);
		printf("%d %d\n",c,b+d);
		printf("%d %d\n",a,b+d);
		
	}
	
	return 0;
}