#include<stdio.h>
#include<queue>
#include<utility>
using namespace std;
int h,w,step = 0,s = 0,ans[100][100],count = 1;
char input[100][100],find;
bool visit[100][100];
queue < pair < int,int > > q;
pair < int , int > curr;
int main()
{
	while(scanf("%d %d",&h,&w)!=EOF)
	{
		for(int i = 0;i<h;i++)
		{
			for(int j = 0;j<w;j++)
			{
				visit[i][j] = 0;
			}
		}
		if(h==0 && w==0) break;
		step = 0;
		for	(int i =0;i<h;i++)
		{
			scanf("%s",input[i]);
		}
		for(int i=0;i<h;i++)
		{
			for(int j=0;j<w;j++)
			{

				if(input[i][j]=='A')
				{
					ans[i][j] = 1;
					visit[i][j] = 1;
					q.push(make_pair(i,j));
					while(!q.empty())
					{
						curr = q.front();
						q.pop();
						find = input[curr.first][curr.second]+1;
						if(ans[curr.first][curr.second]>step) step = ans[curr.first][curr.second];
						if(curr.first-1>=0 && input[curr.first-1][curr.second]==find && !visit[curr.first-1][curr.second])
						{
							q.push(make_pair(curr.first-1,curr.second));
							ans[curr.first-1][curr.second]=ans[curr.first][curr.second]+1;
							visit[curr.first-1][curr.second] = 1;
						}
						if(curr.second-1>=0 && input[curr.first][curr.second-1]==find && !visit[curr.first][curr.second-1])
						{
							q.push(make_pair(curr.first,curr.second-1));
							ans[curr.first][curr.second-1]=ans[curr.first][curr.second]+1;
							visit[curr.first][curr.second-1] = 1;
						}
						if(curr.first+1<h && input[curr.first+1][curr.second]==find && !visit[curr.first+1][curr.second])
						{
							q.push(make_pair(curr.first+1,curr.second));
							ans[curr.first+1][curr.second]=ans[curr.first][curr.second]+1;
							visit[curr.first+1][curr.second] = 1;
						}
						if(curr.second+1<w && input[curr.first][curr.second+1]==find && !visit[curr.first][curr.second+1])
						{
							q.push(make_pair(curr.first,curr.second+1));
							ans[curr.first][curr.second+1]=ans[curr.first][curr.second]+1;
							visit[curr.first][curr.second+1] = 1;
						}
						
						
						if(curr.first-1>=0 && curr.second-1>=0 && input[curr.first-1][curr.second-1]==find && !visit[curr.first-1][curr.second-1])
						{
							q.push(make_pair(curr.first-1,curr.second-1));
							ans[curr.first-1][curr.second-1]=ans[curr.first][curr.second]+1;
							visit[curr.first-1][curr.second-1] = 1;
						}
						if(curr.first-1>=0 && curr.second+1<w && input[curr.first-1][curr.second+1]==find && !visit[curr.first-1][curr.second+1])
						{
							q.push(make_pair(curr.first-1,curr.second+1));
							ans[curr.first-1][curr.second+1]=ans[curr.first][curr.second]+1;
							visit[curr.first-1][curr.second+1] = 1;
						}
						if(curr.first+1<h && curr.second+1<w && input[curr.first+1][curr.second+1]==find && !visit[curr.first+1][curr.second+1])
						{
							q.push(make_pair(curr.first+1,curr.second+1));
							ans[curr.first+1][curr.second+1]=ans[curr.first][curr.second]+1;
							visit[curr.first+1][curr.second+1] = 1;
						}
						if(curr.first+1<h && curr.second-1<w && input[curr.first+1][curr.second-1]==find && !visit[curr.first+1][curr.second-1])
						{
							q.push(make_pair(curr.first+1,curr.second-1));
							ans[curr.first+1][curr.second-1]=ans[curr.first][curr.second]+1;
							visit[curr.first+1][curr.second-1] =1;
						}
					
						
					
					}
				}
				
			}
		}
//		for(int i=0;i<h;i++)
//		{
//			for(int j=0;j<w;j++)
//			{
//				printf("%d",ans[i][j]);
//			}
//			printf("\n");
//		}
//		printf("\n");
		printf("Case %d: %d\n",count,step);
		count++;
	}	
	return 0;
}