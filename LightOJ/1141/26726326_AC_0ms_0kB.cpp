#include<bits/stdc++.h>
using namespace std;
vector  < int > factor[1010];
queue < int > q;
bool visit[1010],ada[1010],prime[1010];
int t,st,fin,ans,sz,primelist[1010],now,step[1010];
void sieve()
{
	int mx = 1000;
	for(int i=2;i*i<=mx;i++)
	{
		if(!prime[i])
		{
			for(int j=i*i;j<=mx;j+=i)
			{
				prime[j] = 1;
			}
		}
	}
	for(int i=2;i<=mx;i++)
	{
		if(!prime[i])
		{
			primelist[sz++] = i;
			for(int j=i+i;j<=mx;j+=i)
			{
				factor[j].push_back(i);
			}
		}
	}
}
int main()
{
	sieve();
	scanf("%d",&t);
	for(int tc=1;tc<=t;tc++)
	{
		scanf("%d %d",&st,&fin);
		while(!q.empty())
		{
			q.pop();
		}
		q.push(st);
		ans = -1;
		for(int i=st;i<=fin;i++)
		{
			step[i] = 1000000000;
		}
		step[st] = 0;
		while(!q.empty())
		{
			now = q.front();
			q.pop();
			if(now==fin)
			{
				ans = step[now];
			}
			if(now>fin) break;
			for(int i=0;i<factor[now].size();i++)
			{
				if(factor[now][i]+now<=fin && step[factor[now][i]+now] > step[now]+1)
				{
					q.push(now+factor[now][i]);
					step[factor[now][i]+now] = step[now]+1;
				}	
			}
		}
		printf("Case %d: %d\n",tc,ans);
	}
	return 0;
}