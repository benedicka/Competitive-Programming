#include<queue>
#include<stdio.h>
#include<vector>
using namespace std;
int t,a,b,n,q;
vector <int> adj[2010];
int color[2010],warna,size;
queue <int> bfs;
bool ok;
void cek(int x)
{
	if(ok==0) return;
	color[x] = 1;
	bfs.push(x);
	while(!bfs.empty())
	{
		if(color[bfs.front()]==1) warna = 2;
		else warna = 1;
		size = adj[bfs.front()].size();
		for(int i=0;i<size;i++)
		{
			if(color[adj[bfs.front()][i]]==0) 
			{
				bfs.push(adj[bfs.front()][i]);
				color[adj[bfs.front()][i]]=warna;
			}
			else if(color[adj[bfs.front()][i]]!=warna)
			{
				ok = 0;
				break;
			}
		}
			//printf("%d\n",bfs.front());
		bfs.pop();
			
	}
}
int main()
{

	scanf("%d",&t);
	for(int j=0;j<t;j++)
	{
		ok = 1;
		for(int i=0;i<n;i++)
		{
			adj[i].clear();
			color[i] = 0;
		}
		scanf("%d %d",&n,&q);
		while(q--)
		{
			scanf("%d %d",&a,&b);
			a-=1;
			b-=1;
			adj[a].push_back(b);
			adj[b].push_back(a);
		}
//		for(int i = 0;i<n;i++)
//		{
//			printf("%d :",i);
//			for(int j=0;j<adj[i].size();j++)
//			{
//				printf("%d ",adj[i][j]);
//			}
//			printf("\n");
//		}
		for(int i=0;i<n;i++)
		{
			if(color[i]==0) cek(i);
		}
		
		printf("Scenario #%d:\n",j+1);
		if(ok==0) printf("Suspicious bugs found!\n");
		else printf("No suspicious bugs found!\n");
	
		while(!bfs.empty())
		{
			bfs.pop();
		}
	}
	
	
	
	
	return 0;
}