#include<bits/stdc++.h>
using namespace std;
int n,k,p,t,ans=0;
pair < int , int > x[60];
bool cmp(pair < int , int > a , pair < int, int > b)
{
	if(a.first!=b.first) return a.first>b.first;
	else
	{
		return a.second<b.second;
	}
}
int main()
{
	scanf("%d %d",&n,&k);
	for(int i=0;i<n;i++)
	{	
		scanf("%d %d",&p,&t);
		x[i] = make_pair(p,t);
	//	printf("%d. %d %d\n",i,x[i].first,x[i].second);
	}
	sort(x,x+n,cmp);
	for(int i=0;i<n;i++)
	{
	//	printf("%d. %d %d %d %d %d\n",i,x[i].first,x[i].second,x[k-1].first,x[k-1].second,ans);
		if(x[i]==x[k-1]) ans++;
	}
	printf("%d\n",ans);
	return 0;
}