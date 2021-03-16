#include<bits/stdc++.h>
using namespace std;
long long ans,t,n,x[1010],jum[1010];
int main()
{
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		ans = 1;
		for(int i=0;i<n;i++)
		{
			scanf("%lld",&x[i]);
			jum[x[i]]+=1;
		}
		sort(x,x+n);
		for(int i=0;i<n;i++)
		{
			ans*=jum[x[i]];
			jum[x[i]]-=1;
			ans%=7901;
		}
		printf("%lld\n",ans%7901);
	}
	return 0;
}