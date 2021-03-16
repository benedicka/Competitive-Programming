#include<stdio.h>
#include<queue>
#include<map>
#include<utility>
using namespace std;
int m1[8] = {1,-1,0,0,1,-1,-1,1};
int m2[8] = {0,0,1,-1,1,-1,1,-1};
int main()
{
	queue < pair < int , pair < int , int > > > bfs;
	pair < int , pair < int , int > > top;
	vector < pair < int , int > > adj[100];
	int ok;
	char map[50][50];
	int t,m,n,ans,size;
	bool visit[50][50];
	scanf("%d",&t);
	for(int tc=1;tc<=t;tc++)
	{
		ok = 0;
		ans = -1;
		scanf("%d %d",&m,&n);
		for(int i=0;i<=('Z'-'E');i++)
		{
			adj[i].clear();
		}
		for(int i=0;i<m;i++)
		{
			scanf("%s",&map[i]);
		}
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				visit[i][j] = 0;
			}
		}
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(map[i][j]!='.' && map[i][j]>='E')
				{
					adj[map[i][j]-'E'].push_back(make_pair(i,j));
				}
			}
		}
		for(int i =0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				
				if(map[i][j]>='A' && map[i][j]<='C')
				{
					for(int k=0;k<m;k++)
					{
						for(int l=0;l<n;l++)
						{
							visit[k][l] = 0;
						}
					}
					bfs.push(make_pair(0,make_pair(i,j)));
					visit[i][j] = 1;
					while(!bfs.empty())
					{
						top = bfs.front();
					
						if(map[top.second.first][top.second.second]=='#')
						{
								
							ok++;
							if(ans==-1) ans = top.first;
							else if(top.first>ans) ans=top.first;
						}
						else
						{
							for(int i=0;i<8;i++)
							{
								if(top.second.first+m1[i]>=0 && top.second.first+m1[i]<m && top.second.second+m2[i]>=0 && top.second.second+m2[i]<n && map[top.second.first+m1[i]][top.second.second+m2[i]]!='D' && visit[top.second.first+m1[i]][top.second.second+m2[i]]==0)
								{
									//printf("cek = %d %d\n",top.second.first+m1[i],top.second.second+m2[i]);
									bfs.push(make_pair(top.first+1,make_pair(top.second.first+m1[i],top.second.second+m2[i])));
									visit[top.second.first+m1[i]][top.second.second+m2[i]]=1;
								}
							}
							if(map[top.second.first][top.second.second]>='E' && map[top.second.first][top.second.second]<='Z' )
							{
								size = adj[map[top.second.first][top.second.second]-'E'].size();
								for(int i=0;i<size;i++)
								{
									if(visit[adj[map[top.second.first][top.second.second]-'E'][i].first][adj[map[top.second.first][top.second.second]-'E'][i].second]==0)
									{
										visit[adj[map[top.second.first][top.second.second]-'E'][i].first][adj[map[top.second.first][top.second.second]-'E'][i].second] = 1;
										bfs.push(make_pair(top.first+1,make_pair(adj[map[top.second.first][top.second.second]-'E'][i].first,adj[map[top.second.first][top.second.second]-'E'][i].second)));
									}
								}
							}
						}
						bfs.pop();
					}
				}
			}
		}
		
		printf("Case %d: ",tc);
		if(ok!=3) printf("impossible");
		else printf("%d",ans);
		printf("\n");
	}	
	return 0;
}