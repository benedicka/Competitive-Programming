#include<stdio.h>
#include<map>
using namespace std;
long long mp[100010];
long long dp[100010],a,n,ans,mx;
long long max(long long a, long long b)
{
	if(a>b) return a;
	else return b;
}
int main()
{
	scanf("%lld",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%lld",&a);
		mp[a]+=a;
		if(a>mx) mx = a;
	}
	for(int i=2;i<=mx;i++)
	{
		mp[i] = max(mp[i-1],mp[i-2]+mp[i]);
	}
	printf("%lld\n",mp[mx]);	
	return 0;
}