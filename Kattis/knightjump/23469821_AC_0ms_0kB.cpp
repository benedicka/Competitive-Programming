#include<bits/stdc++.h>
using namespace std;
queue < pair < int , pair < int, int> > > q;
int m1[]={2,2,-2,-2,1,1,-1,-1},m2[]={1,-1,1,-1,2,-2,2,-2},sz=8,n;
char x[110][110];
bool vis[110][110];
bool valid(int a,int b)
{
	if(a<0 || b<0) return 0;
	if(a>=n || b>=n) return 0;
	if(x[a][b]!='.') return 0;
	if(vis[a][b]) return 0;
	return 1;
}
int main()
{
	bool done = 0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%s",&x[i]);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(x[i][j]=='K')
			{
				done  = 1;
				int ans = -1,nx,ny,cost;
				q.push(make_pair(i,make_pair(j,0)));
				while(!q.empty())
				{
					
					nx = q.front().first;
					ny = q.front().second.first;
				//	printf("%d %d\n",nx,ny);
					vis[nx][ny] = 1;
					cost = q.front().second.second;
					q.pop();
					if(nx==ny && nx==0)
					{
						ans = cost;
						printf("%d\n",ans);
						break;
					}
					for(int k=0;k<sz;k++)
					{
						
						if(valid(nx+m1[k],ny+m2[k]))
						{
						//	printf("c = %d %d\n",nx+m1[k],ny+m2[k]);
							q.push(make_pair(nx+m1[k],make_pair(ny+m2[k],cost+1)));
							vis[nx+m1[k]][ny+m2[k]] = 1;
						}
					}
				}
				if(ans==-1) printf("%d\n",ans);
				break;
			}
		}
		if(done) break;
	}
	return 0;
}