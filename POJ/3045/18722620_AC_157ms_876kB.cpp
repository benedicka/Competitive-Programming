#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<utility>
#include<climits>
using namespace std;
pair < long long , long long > x[50010];
long long n,w,p,ans = -9223372036854775800,pref;
bool cmp(pair < long long , long long > a, pair < long long , long long > b)
{
	return a.first+a.second<b.first+b.second;
}
int main()
{
	scanf("%lld",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%lld %lld",&w,&p);
		x[i] = make_pair(w,p);
	}
	sort(x,x+n,cmp);
	for(int i=0;i<n;i++)
	{
		ans = max(ans,pref-x[i].second);
		pref+=x[i].first;
	}
	printf("%lld\n",ans);
	return 0;
}