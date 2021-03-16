#include<bits/stdc++.h>
using namespace std;
long long n,a,sum[100010],ans;

int main()
{
	scanf("%lld",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%lld",&a);
		sum[a]+=a;
	}
	for(int i=2;i<=100000;i++)
	{
		sum[i] = max(sum[i-2]+sum[i],sum[i-1]);
		ans = max(ans,sum[i]);
	}
	printf("%lld\n",ans);
	return 0;
}