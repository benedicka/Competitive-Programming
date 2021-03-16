#include<bits/stdc++.h>
using namespace std;
long long t,n,x[110],tot,ans,sum;
int idx = 0;
int main()
{
	scanf("%lld",&t);
	while(t--)
	{
		ans = 0;
		scanf("%lld",&n);
		tot = 0;
		idx = 0;
		sum = 0;
		for(int i=0;i<n;i++)
		{
			scanf("%lld",&x[i]);
		}
		sort(x,x+n);
		while(sum+x[idx]<=300 && idx<n)
		{
			tot+=(sum+x[idx]);
			sum+=x[idx];
			idx++;
			ans++;
		}
		printf("%lld %lld\n",ans,tot);
	}
	
	return 0;
}