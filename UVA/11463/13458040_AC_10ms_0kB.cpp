#include<stdio.h>
#include<vector>
using namespace std;

int main()
{
	int size,t,n,m,a,b,ans,adj[110][110];
	scanf("%d",&t);
	for(int tc=1;tc<=t;tc++)
	{
		scanf("%d %d",&n,&m);
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(i!=j)adj[i][j]= 10000000;
				else adj[i][j] = 0;
			}
		}
		for(int i=0;i<m;i++)
		{
			scanf("%d %d",&a,&b);
			adj[a][b] = 1;
			adj[b][a] = 1;
		}
		scanf("%d %d",&a,&b);
		
		for(int k=0;k<n;k++)
		{
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<n;j++)
				{
					if(adj[i][j]>adj[i][k]+adj[k][j])
					{
						adj[i][j] =adj[i][k]+adj[k][j];
					}
				}
			}
		}
//		for(int i=0;i<n;i++)
//		{
//			for(int j=0;j<n;j++)
//			{
//				printf("%d ",adj[i][j]);
//			}
//			printf("\n");
//		}
		ans = 0;
		for(int i=0;i<n;i++)
		{
			if(adj[a][i]!=10000000 && adj[i][b]!=10000000 && ans<adj[a][i]+adj[i][b]) ans =adj[a][i]+adj[i][b];
		}
		printf("Case %d: %d\n",tc,ans);
	}
	
	
	return 0;
}