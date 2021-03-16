#include<bits/stdc++.h>
using namespace std;
pair < int , int > depart[5010];
pair < int , pair < int , int > > build[5010];
int q,p[5010],n,m,c[5010],ans[5010],cap,price;
bool ambil[5010]={0},ok;
int main()
{
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&q);
		depart[i] = make_pair(q,i);
	}
	sort(depart,depart+n);
	for(int i=0;i<m;i++)
	{
		scanf("%d",&c[i]);
	}
	for(int i=0;i<m;i++)
	{
		scanf("%d",&p[i]);
		build[i] = make_pair(p[i],make_pair(c[i],i+1));
	}
	sort(build,build+m);
	for(int i=n-1;i>=0;i--)
	{
		bool cek = 0;
		for(int j=0;j<m;j++)
		{
			cap = build[j].second.first;
			price = build[j].first;
			q = build[j].second.second;
			if(cap>=depart[i].first && !ambil[j])
			{
				cek = 1;
				ambil[j] = 1;
				ans[depart[i].second] = q;
				break;
			}
		}
		if(!cek) break;
		if(i==0) ok = 1;
	}
	if(ok)
	{
		for(int i=0;i<n;i++)
		{
			if(i!=0) printf(" ");
			printf("%d",ans[i]);
		}
		
	}
	else printf("impossible");
        printf("\n");
	return 0;
}