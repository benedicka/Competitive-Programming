#include<bits/stdc++.h>
using namespace std;
int adjlist[40][40],x[40],n,a,b,cnt,jum[40],ida,idb,now = 0,sz = 0,bfs[100010],cost[40];
bool visit[40];
int s(int target)
{
	for(int i=0;i<cnt;i++)
	{
		if(x[i]==target) return i;
	}
	return -1;
}
int main()
{	
	//freopen("output.txt","w",stdout);
	int tc = 1;
	while(scanf("%d",&n)!=EOF)
	{
		if(n==0) break;
		
		for(int i=0;i<40;i++) jum[i] = 0;
		cnt = 0;
		for(int i=0;i<n;i++)
		{
			scanf("%d %d",&a,&b);
			ida = s(a);
			if(ida==-1)
			{
				ida = cnt;
				x[cnt++] = a;
			}
			adjlist[ida][jum[ida]++] = s(b)==-1?cnt:s(b);
			idb = s(b);
			if(idb==-1)
			{
				idb = cnt;
				x[cnt++] = b;
			}
			if(ida!=idb)adjlist[idb][jum[idb]++] = ida;
		}
//		for(int i=0;i<cnt;i++)
//		{
//			printf("%d | ",x[i]);
//			for(int j=0;j<jum[i];j++)
//			{
//				printf("%d ",x[adjlist[i][j]]);
//			}
//			printf("\n");
//		}
		while(scanf("%d %d",&a,&b)!=EOF)
		{
			now = 0;
			if(!a && !b) break;
		//	printf("in : %d %d\n",a,b);
			int ans = 0;
			if(s(a)==-1) ans = cnt;
			else
			{
				for(int i=0;i<40;i++) visit[i] = 0;
		//		printf("root : %d\n",a);
				sz = 1;
				a = s(a);
				visit[a] = 1;
				bfs[now] = a;
				memset(cost,0,sizeof(cost));
				while(now<sz)
				{
					int tmp = bfs[now],mx=jum[tmp];
					now++;
					for(int i=0;i<mx;i++)
					{
						if(!visit[adjlist[tmp][i]])
						{
							//printf("%d->%d\n",x[tmp],x[adjlist[tmp][i]]);
							visit[adjlist[tmp][i]] = 1;
							cost[adjlist[tmp][i]] = cost[tmp]+1;
							bfs[sz++] = adjlist[tmp][i];
						}
					}
					
				}
				for(int i=0;i<cnt;i++)
				{
				//	printf("%d-> %d %d\n",x[i],visit[i],cost[i]);
					if(!visit[i]||cost[i]>b ) ans++;
				}
				a = x[a];
			}
			printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",tc++,ans,a,b);
		}
		
	}	
	return 0;
}