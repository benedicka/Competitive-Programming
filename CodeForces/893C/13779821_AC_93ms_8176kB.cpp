#include<stdio.h>
#include<queue>
#include<algorithm>
#include<iostream>
using namespace std;
int n,m,c[100010],parent[100010],a,b,cost;
long long ans=0;
bool cek[100010];
priority_queue < pair < int , pair < int , int  > > > pq;
int findparent(int x)
{

	if(x==parent[x]) return x;
	else
	{
		parent[x] = findparent(parent[x]);
		return parent[x];
	}

}
void unionset(int a,int b)
{
	int parent_a = findparent(a);
	int parent_b = findparent(b);
	if(parent_a==parent_b) return;
	else if(parent_a < parent_b) parent[parent_b] = parent[parent_a];
	else parent[parent_a] = parent[parent_b];
}


bool sameparent(int a,int b)
{
	if(findparent(a)==findparent(b)) return 1;
	else return 0;
}

int main()
{
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&c[i]);
		parent[i] = i;
	}
	while(m--)
	{
		scanf("%d %d",&a,&b);
		cek[a] = 1;
		cek[b] = 1;
		cost = min(c[a],c[b]);
		pq.push(make_pair(-1*cost , make_pair(a,b) ));
		unionset(a,b);
	}
	for(int i=1;i<=n;i++)
	{
		if(!cek[i]) ans+=(-1*c[i]);
	//	printf("%lld\n",ans);
		cek[i] = 0;
	}
	while(!pq.empty())
	{
		cost = pq.top().first;
		a = pq.top().second.first;
		b = pq.top().second.second;
		//printf("%d %d %d ans = %lld\n",cost,a,b,ans);
		unionset(a,b);
		if(!cek[parent[a]] && !cek[parent[b]])
		{
			cek[parent[a]]=1;
			cek[parent[b]]=1;
			ans+=cost;
		}
		pq.pop();
	}
//	printf("%lld\n",ans);
	
	printf("%lld",-1*ans);
	return 0;
}