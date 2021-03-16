#include<bits/stdc++.h>
using namespace std;
long long n,ans,cnt=1,x[200010];
int main()
{
	scanf("%lld",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%lld",&x[i]);
	}
	sort(x,x+n);
	for(int i=n-1;i>=0;i--)
	{
		if(cnt>x[i]) break;
		ans+=(x[i]-cnt);
		cnt++;
	}
	printf("%lld\n",ans);
	return 0;
}