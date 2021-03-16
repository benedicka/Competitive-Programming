#include<stdio.h>
#include<string.h>							
int m1[]={0,0,1,-1,1,-1,1,-1},m2[]={1,-1,0,0,-1,1,1,-1},sz=8,n,m,ans;
char x[110][110];
bool visit[110][110];
bool cek(int a, int b)
{
	if(a<0 || b<0) return 0;
	if(a>=n) return 0;
	if(b>=m) return 0;
	if(x[a][b]=='*') return 0;
	if(visit[a][b]) return 0;
	return 1;
}
void dfs(int a,int b)
{
	visit[a][b] = 1;
	for(int i=0;i<sz;i++)
	{
		if(cek(a+m1[i],b+m2[i]))
		{
			visit[a+m1[i]][b+m2[i]] = 1;
			dfs(a+m1[i],b+m2[i]);
		}
	}
}
int main()
{
	while(scanf("%d %d",&n,&m)!=EOF)
	{
		if(!n && !m) break;
		for(int i=0;i<n;i++)
		{
			scanf("%s",&x[i]);
		}
		ans = 0;
		memset(visit,0,sizeof(visit));
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(!visit[i][j] && x[i][j]=='@')
				{
					dfs(i,j);
					ans++;
				}
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}