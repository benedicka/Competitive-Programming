#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,a[100010],b,idx,num[100010];
	long long ans;
	map < int  , int  > mp;
	scanf("%lld",&t);
	for(int tc = 1;tc<=t;tc++)
	{
		mp.clear();
		scanf("%lld",&n);
		for(int i=0;i<n;i++)
		{
			scanf("%lld %lld",&a[i],&num[i]);
			mp[a[i]]++;
		}
		ans = 0;
		for(int i=0;i<n;i++)
		{
			ans+=(mp[num[i]]);
			if(a[i]==num[i]) ans-=1;
		}
		printf("%lld\n",ans);
	}
	return 0;
}