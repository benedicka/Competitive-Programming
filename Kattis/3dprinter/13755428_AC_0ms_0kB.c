#include<stdio.h>
int main()
{
	int n,c,ans;
	ans = 0;
	c = 1;
	scanf("%d",&n);
	while (c<n)
	{
		c*=2;
	}
	while(c>=1)
	{
		c/=2;
		ans++;
	}
	printf("%d\n",ans);
	return 0;
}