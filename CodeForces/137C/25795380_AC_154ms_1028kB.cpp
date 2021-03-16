#include<bits/stdc++.h>
using namespace std;
int ans,a,b,n,mx;
pair < int , int > x[100010];
bool cmp(pair < int , int > y, pair < int , int > z)
{
	if(y.first!=z.first)
	{
		return y.first<z.first;
	}
	return y.second>z.second;
}
int main()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d %d",&a,&b);
		x[i] = make_pair(a,b);
	}
	sort(x,x+n,cmp);
	mx = x[0].second;
	for(int i=1;i<n;i++)
	{
		if(x[i].second>mx)
		{
			mx = x[i].second;
			continue;
		}
		else
		{
			ans++;
		}
	}
	printf("%d\n",ans);
	return 0;
}