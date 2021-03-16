#include<stdio.h>
int t,ans,n;
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		printf("%d\n",n/2+1);
	}
	return 0;
}