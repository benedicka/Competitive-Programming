#include<bits/stdc++.h>
using namespace std;
long long t,n,x[100010],ans,tmp,cnt, mod = 1000000007;

int main()
{
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		for(int i=0;i<n;i++)
		{
			scanf("%lld",&x[i]);
		}
		sort(x,x+n);
		ans = 0;
		cnt = 1;
		tmp = x[0];
		for(int i=0;i<n;i++)
		{
			if(tmp!=x[i])
			{
				cnt++;
                                tmp=x[i];
				cnt%=mod;
			}
			ans+=cnt;
			ans%=mod;
		}
		printf("%lld\n",ans);
	}	
	return 0;
}