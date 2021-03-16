#include<stdio.h>
int main()
{
	int t,n,a,ans;
	scanf("%d",&t);
	while(t--)
	{
		ans = 0;
		scanf("%d",&n);
		ans+=n;
		while(n--)
		{
			scanf("%d",&a);
			ans+=a;
		}
		printf("%d\n",ans);
	}
	
	return 0;
}