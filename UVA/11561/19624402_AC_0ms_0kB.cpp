#include<bits/stdc++.h>
using namespace std;
int n,m,move1[]={0,0,1,-1},move2[] = {1,-1,0,0},sta,stb,ans;
bool visit[60][60];
char b[60][60];
bool valid(int x,int y)
{
	if(x<0 || y<0) return 0;
	if(x>=n || y>=m) return 0;
	return 1;
}
bool issafe(int x, int y)
{
	for(int i=0;i<4;i++)
	{
		if(valid(x+move1[i],y+move2[i]))
		{
			if(b[x+move1[i]][y+move2[i]]=='T') return 0;
		}
	}
	return 1;
}
void dfs(int x,int y)
{
	
	if(b[x][y]=='G') ans++;
	visit[x][y] = 1;
	if(!issafe(x,y)) return;
	for(int i=0;i<4;i++)
	{
		if(valid(x+move1[i],y+move2[i]) && !visit[x+move1[i]][y+move2[i]])
		{
			if(b[x+move1[i]][y+move2[i]]=='.' || b[x+move1[i]][y+move2[i]]=='G')dfs(x+move1[i],y+move2[i]);
		}
	}
}
int main()
{
	while(scanf("%d %d",&n,&m)!=EOF)
	{
		swap(n,m);
		for(int i=0;i<n;i++)
		{
			scanf("%s",&b[i]);
			for(int j=0;j<m;j++)
			{
				if(b[i][j]=='P')
				{
					sta = i;
					stb = j;
				}
				visit[i][j] = 0;
			}
		}
		ans = 0;
		dfs(sta,stb);
		printf("%d\n",ans);
	}
	return 0;
}