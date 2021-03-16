#include<stdio.h>
#include<stack>
#include<vector>
#include<iostream>
using namespace std;
int n,m,a,b;
vector < int >  adj[101];
stack < int > sort;
int visit[101];
void dfs(int x)
{
	if(visit[x]==2) return;
	if(!adj[x].empty())
	{
		for(int i=0;i<adj[x].size();i++)
		{
			if(visit[adj[x][i]]==0)
			{
				visit[adj[x][i]] = 1;
				dfs(adj[x][i]);
				if(visit[adj[x][i]]!=2)visit[adj[x][i]] = 0;
			}
		}
	}
	
	if(visit[x]!=2)
	{
		sort.push(x);
		//cout<<sort.top()<<endl;
		visit[x] = 2;
	}
	return;
}
int main()
{

	while(scanf("%d %d",&n,&m)!=EOF)
	{
		if(n==0 && m==0) break;
		for(int i=0;i<n;i++)
		{
			adj[i].clear();
			visit[i] = 0;
		}
		for(int i=0;i<m;i++)
		{
			scanf("%d %d",&a,&b);
			a--;
			b--;
			adj[a].push_back(b);
			
		}
//		for(int i=0;i<n;i++)
//		{
//			printf("size  = %d | adj ",adj[i].size());
//			printf("%d : ",i);
//			if(!adj[i].empty())
//			{
//				for(int j=0;j<adj[i].size();j++)
//				{
//					printf("%d ",adj[i][j]);
//				}
//			}
//			printf("\n");
//		}
		for(int i=0;i<n;i++)
		{
			dfs(i);
		}
		for(int i=0;i<n;i++)
		{
			printf("%d",sort.top()+1);
			sort.pop();
			if(i<n-1) printf(" ");
			else printf("\n");
		}
	}	
	
	
	return 0;
}