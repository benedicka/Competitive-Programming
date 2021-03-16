#include<bits/stdc++.h>
using namespace std;
long long t,n,x[1010],lis[1010],cnt[1010],ans1,ans2;
const long long md = 1e9 + 7;
int main()
{
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		for(int i=1;i<=n;i++)
		{
			scanf("%lld",&x[i]);
			lis[i] = 1;
			cnt[i] = 1;
		}
		ans1 = 0;
		for(int i=2;i<=n;i++)
		{
			for(int j=1;j<i;j++)
			{
				if(x[j]<x[i])
				{
					if(lis[j]>=lis[i])
					{
						lis[i] = lis[j]+1;
						cnt[i] = cnt[j];
					}
					else if(lis[j]+1==lis[i])
					{
						cnt[i] = cnt[i]%md + cnt[j]%md;
						cnt[i] %= md;
					}		
				}				
			}
		}
		ans1 = ans2 = 0;
		for(int i=1;i<=n;i++)
		{
			ans1 = max(ans1,lis[i]);
		}
		for(int i=1;i<=n;i++)
		{
			if(lis[i]==ans1)
			{
				ans2 = (ans2%md + cnt[i]%md)%md;
			}
		}
		printf("%lld %lld\n",ans1,ans2);
	}
	return 0;
}