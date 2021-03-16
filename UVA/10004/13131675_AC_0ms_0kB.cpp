#include<stdio.h>
#include<vector>
#include<queue>
using namespace std;
int main()
{
	bool ok;
	int n,t,a,b,size;
	int color[210],w;
	vector < int > adj[210];
	queue < int > node;
	while(scanf("%d",&n)!=EOF)
	{
		if(n==0) break;
		ok = 1;
		for(int i=0;i<n;i++)
		{
			adj[i].clear();
			color[i] = 0;
		}
		
		scanf("%d",&t);
		while(t--)
		{
			scanf("%d %d",&a,&b);
			adj[a].push_back(b);
			adj[b].push_back(a);
			
		}
		//printf("\n");
		node.push(0);
	
		while(!node.empty())
		{
		
			size = adj[node.front()].size();
			if(color[node.front()]==0)
			{
				color[node.front()] =1;
				w = 2;
			} 
			else if (color[node.front()]==1) 
			{
				w = 2;
			}
			else if (color[node.front()]==2) w = 1;
			for(int i=0;i<size;i++)
			{
				if(color[adj[node.front()][i]]==0)node.push(adj[node.front()][i]);
				if(color[adj[node.front()][i]]==0 || color[adj[node.front()][i]]==w) color[adj[node.front()][i]]=w;
				else
				{
					ok = 0;
					break;
				}
			}
			node.pop();
			if(ok==0) break;
		}
		if(ok==1) printf("BICOLORABLE.\n");
		else printf("NOT BICOLORABLE.\n");
	}
	return 0;
}