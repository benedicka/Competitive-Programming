#include<bits/stdc++.h>
using namespace std;
long long ans,t,n,h[2010];
int main()
{
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		ans = 0;
		for(int i=1;i<=2*n;i++)
		{
			scanf("%lld",&h[i]);
		}
		int j=2*n;
		for(int i=1;i<=n;i++)
		{
			ans = max(ans,h[i]+h[j]);
			j--; 
		}
		printf("%lld\n",ans);
	}
	return 0;
}