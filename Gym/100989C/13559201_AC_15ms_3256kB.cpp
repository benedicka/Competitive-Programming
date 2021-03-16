#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,a,b,ans;
	ans = 0;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d %d",&a,&b);
		ans+=(abs(a-b));
	}
	printf("%d\n",ans);
	return 0;
}