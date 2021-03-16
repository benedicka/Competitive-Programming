#include<bits/stdc++.h>
using namespace std;
long long n,m,ans,x[60];

int main()
{
//	cout<<LONG_LONG_MAX;
	scanf("%lld %lld",&m,&n);
	for(int i=0;i<n;i++)
	{
		scanf("%lld",&x[i]);
	}
	sort(x,x+n);
	ans = 9223372036854775807;
	for(int i=0;i<n && i+m-1<n;i++)
	{
		ans = min(ans,x[i+m-1]-x[i]);
	}
	printf("%lld\n",ans);
	return 0;
}