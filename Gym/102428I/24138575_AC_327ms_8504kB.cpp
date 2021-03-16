#include <bits/stdc++.h> 
using namespace std; 
int n,l,a,b,cnt,dp[2010],mod=1e9+7;
vector < int >  adjlist[2010];
bool visit[2010];
int dfs(int node)
{	
	if(adjlist[node].size()==0) 
	{
		if(!visit[node])
		{ 
			visit[node] = 1;
			cnt++;
		}
		return 1;
	}
	if(dp[node]!=-1) return dp[node];
	int res = 0;
	for(int i=0;i<adjlist[node].size();i++)
	{
		res+=dfs(adjlist[node][i])%mod;
		res%=mod;
	}
	return dp[node]=res%mod;
}
int main() 
{ 
	int z;
 	scanf("%d %d",&n,&l);
 	memset(dp,-1,sizeof(dp));
	for(int i=0;i<l;i++)
	{
		scanf("%d",&z);
		for(int j=0;j<z;j++)
		{
			scanf("%d",&a);
			adjlist[i+1].push_back(a);
		}
	}
	
	printf("%d",dfs(1));
	printf(" %d\n",cnt);
    return 0; 
} 