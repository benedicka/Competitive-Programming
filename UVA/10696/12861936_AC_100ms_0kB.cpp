#include<stdio.h>
int f(int x)
{
	if (x <=100) f(f(x + 11));
	else return (x-10);
}
int main()
{
	int a;
	while(scanf("%d",&a)!=EOF)
	{
		if(a==0) break;
		printf("f91(%d) = %d\n",a,f(a));
	}
	
	
	
	
	
	return 0;
}