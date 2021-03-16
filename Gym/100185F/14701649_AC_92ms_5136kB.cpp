#include<stdio.h>
#include<string>
#include<iostream>
#include<map>
#include<queue>
#include<utility>
using namespace std;
bool done[10010];
priority_queue< pair <int , pair < int , int > > > pq[50];
int main()
{
	int t,n,c,tl,now;
	long long ans=0;
	scanf("%d %d",&n,&t);
	for(int i=0;i<n;i++)
	{
		scanf("%d %d",&c,&tl);
		done[i] = 0;
		for(int j=0;j<=tl;j++)
		{
			pq[j].push(make_pair(c,make_pair(-1*tl,i)));
		}
	}
	for(int i=t-1;i>=0;i--)
	{
		if(pq[i].empty()) continue;
		now = pq[i].top().second.second;
		while(!pq[i].empty())
		{
			if(done[now] || -1*pq[i].top().second.first<i)pq[i].pop();
			else break;
			if(pq[i].empty()) break;
			now = pq[i].top().second.second;
		}
		if(pq[i].empty()) continue;
		done[now] = 1;
		ans+=pq[i].top().first;
	}
	printf("%lld\n",ans);
	return 0;
}