#include<bits/stdc++.h>
using namespace std;
int n,v,mn[100010],mx[100010];
pair < int , int > x[100010];

int main()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&v);
		x[i] = make_pair(v,i);
	}
	sort(x,x+n);
	mx[x[0].second] = abs(x[0].first-x[n-1].first);
	mn[x[0].second] = abs(x[0].first-x[1].first);
	for(int i=1;i<n-1;i++)
	{
		mx[x[i].second] = max(abs(x[i].first-x[0].first),abs(x[i].first-x[n-1].first));
		mn[x[i].second] = min(abs(x[i].first-x[i-1].first),abs(x[i].first-x[i+1].first));
	}
	mx[x[n-1].second] = abs(x[n-1].first-x[0].first);
	mn[x[n-1].second] = abs(x[n-1].first-x[n-2].first);
	for(int i=0;i<n;i++)
	{
		printf("%d %d\n",mn[i],mx[i]);
	}
	return 0;
}