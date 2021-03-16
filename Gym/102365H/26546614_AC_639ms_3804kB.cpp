#include<bits/stdc++.h>
using namespace std;
long long n,mx,ans = 1,cnt;

int main()
{
	scanf("%lld",&n);
	mx = (long long)1<<26;
	for(long long i=2;i<=mx;i++)
	{
		if(i>n) break;
		cnt = 0;
		while(n%i==0)
		{
			n/=i;
			cnt++;
		}
		if(cnt%2)ans*=i;
	}
	if(n!=1)
	{
		long long tmp = sqrt(n);
		if(tmp*tmp!=n) ans*=n;
	}
	printf("%lld\n",ans);
	return 0;
}