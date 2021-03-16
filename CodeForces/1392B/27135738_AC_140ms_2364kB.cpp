#include<bits/stdc++.h>
using namespace std;
int t,n,x,ans[200010];
long long m;
pair < int, int >p[200010];
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %lld",&n,&m);
		for(int i=0;i<n;i++)
		{
			scanf("%d",&x);
			p[i] = make_pair(x,i);
		}
		sort(p,p+n);
		if(p[0].first!=0)
		{
			for(int i=0;i<n;i++)
			{
				p[i] = make_pair(p[n-1].first-p[i].first,p[i].second);
			}
			m-=1;
		}
		if(m%2)
		{
			sort(p,p+n);
			for(int i=0;i<n;i++)
			{
				p[i] = make_pair(p[n-1].first-p[i].first,p[i].second);
			}
			m-=1;
		}
		for(int i=0;i<n;i++)
		{
			ans[p[i].second] = p[i].first;
		}
		for(int i=0;i<n;i++)
		{
			if(i) printf(" ");
			printf("%d",ans[i]);
		}
		printf("\n");
	}
	return 0;
}