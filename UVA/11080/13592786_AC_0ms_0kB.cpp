#include <stdio.h>
#include <queue>
using namespace std;
vector < int >  adj[210];
int color[210];
int main()
{
	int t,m,n,warna,a,b,ans1,ans2,ans,size,ok;
	queue < int > q;
	scanf("%d",&t);
	while(t--)
	{
		while(!q.empty())
		{
			q.pop();
		}
		scanf("%d %d",&m,&n);
		ans = 0;
		ok=1;
		for(int i=0;i<m;i++)
		{
			adj[i].clear();
			color[i] = 0;
		}
		while(n--)
		{
			scanf("%d %d",&a,&b);
			adj[a].push_back(b);
			adj[b].push_back(a);
		}
		for(int i=0;i<m;i++)
		{
			if(color[i]==0) q.push(i);
			ans1=0;
			ans2=0;
			while(!q.empty())
			{
				if(color[q.front()]==0 || color[q.front()]==1)
				{
					ans1++;
					color[q.front()] = 1;
					warna = 2;
				}
				else
				{
					ans2++;
					warna = 1;
				}
				
				size = adj[q.front()].size();
				if(size==0) ans2++;
				for(int i=0;i<size;i++)
				{
					if(color[adj[q.front()][i]]==warna || color[adj[q.front()][i]] ==0) 
					{
						if (color[adj[q.front()][i]]==0)q.push(adj[q.front()][i]);
						color[adj[q.front()][i]] = warna;
					}
					else
					{
						ok = 0;
						break;
					}
				}
				if(ok==0) break;
				q.pop();
			}
			ans1<ans2?ans+=ans1:ans+=ans2;
		}
		
		if(ok==0) printf("-1\n");
		else printf("%d\n",ans);
	}
	return 0;
}