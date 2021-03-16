#include<stdio.h>
#define inf 1000000000
int main()
{
	int z,t,n,exit,m,from,to,w,adj[110][110],ans;
	scanf("%d",&z);
	while(z--)
	{
		scanf("%d %d %d %d",&n,&exit,&t,&m);
		//printf("n = %d exit = %d t = %d m = %d\n",n,exit,t,m);
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				if(i!=j) adj[i][j] = inf;
				else adj[i][j] = 0;
			}
		}
		for(int i=0;i<m;i++)
		{
			scanf("%d %d %d",&from,&to,&w);
			adj[from][to] = w;
		}
		
		for(int k=1;k<=n-1;k++)
		{
			for(int i=1;i<=n;i++)
			{
				for(int j=1;j<=n;j++)
				{
					if(adj[i][j]>adj[i][k]+adj[k][j])
					{
						adj[i][j] =adj[i][k]+adj[k][j];
					}
				}
			}
		}
//		for(int i=1;i<=n;i++)
//		{
//			for(int j=1;j<=n;j++)
//			{
//				printf("%d ",adj[i][j]);
//			}
//			printf("\n");
//		}
		ans = 0;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				if(adj[i][j]!=inf && adj[j][exit]!=inf && adj[i][j]+adj[j][exit]<=t)
				{
					ans+=1;
					break;	
				}
			}
		}
		printf("%d\n",ans);
		if(z!=0) printf("\n");
	}
	
	
	return 0;
}