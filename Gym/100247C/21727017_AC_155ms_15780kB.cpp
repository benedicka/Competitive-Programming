#include<bits/stdc++.h>
using namespace std;
long long n,x,sum,s,ans;
map< long long , long long > mp;

int main()
{
	scanf("%lld %lld",&n,&s);
	while(n--)
	{
		scanf("%lld",&x);
		sum+=x;
		ans+=mp[sum-s];
		mp[sum]++;
		if(sum==s) ans++;
	}
	printf("%lld\n",ans);
	return 0;
}