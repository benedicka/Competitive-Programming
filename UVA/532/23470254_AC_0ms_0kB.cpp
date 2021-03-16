#include<bits/stdc++.h>
using namespace std;
queue < pair < int , pair < int, pair < int , int > > > > q;
int m1[]={0,0,0,0,1,-1},m2[]={0,0,1,-1,0,0},m3[]={1,-1,0,0,0,0},sz=6,l,r,c,nx,ny,nz,cost,ans;
char x[40][40][40];
bool vis[40][40][40];
bool valid(int a,int b,int d)
{
	if(a<0 || b<0 || d<0) return 0;
	if(a>=l || b>=r || d>=c) return 0;
	if(x[a][b][d]=='#') return 0;
	if(vis[a][b][d]) return 0;
	return 1;
}
int main()
{
	while(scanf("%d %d %d",&l,&r,&c)!=EOF)
	{
		bool done = 0;
		if(!l && !r && !c) break;
		memset(vis,0,sizeof(vis));
		ans = -1;
		while(!q.empty()) q.pop();
		for(int i=0;i<l;i++)
		{
			for(int j=0;j<r;j++)
			{
				scanf("%s",&x[i][j]);
			}
			getchar();
		}
		for(int i=0;i<l;i++)
		{
			for(int j=0;j<r;j++)
			{
				for(int k=0;k<c;k++)
				{
					if(x[i][j][k]=='S')
					{
						done = 1;
						q.push(make_pair(i,make_pair(j,make_pair(k,0))));
						vis[i][j][k] = 1;
						while(!q.empty())
						{
							
							nz = q.front().first;
							nx = q.front().second.first;
							ny = q.front().second.second.first;
							cost = q.front().second.second.second;
							
							q.pop();
							if(x[nz][nx][ny]=='E')
							{
								ans = cost;
								printf("Escaped in %d minute(s).\n",ans);
								break;
							}
							for(int k=0;k<sz;k++)
							{
								
								if(valid(nz+m1[k],nx+m2[k],ny+m3[k]))
								{
								//	printf("c = %d %d\n",nx+m1[k],ny+m2[k]);
									q.push(make_pair(nz+m1[k],make_pair(nx+m2[k],make_pair(ny+m3[k],cost+1))));
									vis[nz+m1[k]][nx+m2[k]][ny+m3[k]] = 1;
								}
							}
						}
						if(ans==-1) printf("Trapped!\n");
						break;
					}
					if(done) break;
				}
				if(done) break;
			}
			if(done) break;
		}
	}
	return 0;
}