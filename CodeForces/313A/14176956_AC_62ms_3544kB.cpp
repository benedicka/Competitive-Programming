#include<stdio.h>
int a,x,y;
int main()
{
	scanf("%d",&a);
	if(a>=0) printf("%d\n",a);
	else
	{
		x = a/10;
		y = a%10+10*(a/100);
		printf("%d\n",x>y?x:y);
	}
	return 0;
}