#include<bits/stdc++.h>
using namespace std;
long long t,n,m,ans;
int main()
{
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		m = n-1;
		n = n^m;
		ans = 0;
		for(int i=1;i<=64;i++)
		{
			if((long long)n&((long long) 1<<i)) ans++;
		}
		printf("%lld\n",ans);
	}
	return 0;
}