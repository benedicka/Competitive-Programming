#include<stdio.h>
#include<queue>
#include<vector>
#include<iostream>
using namespace std;
int n,m,q,museum[1010][1010],ans,a,b;
int visit[1010][1010];
char x[1010];
void cek(int a,int b)
{
	
	//printf("%d %d\n",a,b);
	visit[a][b] = 1;
	if(a>1 && museum[a-1][b]==-1) ans+=1;
	if(b>1 && museum[a][b-1]==-1) ans+=1;
	if(a<m && museum[a+1][b]==-1) ans+=1;
	if(b<n && museum[a][b+1]==-1) ans+=1;	
	

	
	if(museum[a-1][b]==0 && visit[a-1][b]==0) 
	{
		visit[a-1][b] = 1;
		cek(a-1,b);
		
	}
	if(museum[a][b-1]==0 && visit[a][b-1]==0) 
	{
		visit[a][b-1] = 1;
		cek(a,b-1);
			
	}
	if(museum[a+1][b]==0 && visit[a+1][b]==0)
	{
		visit[a+1][b] = 1;
		cek(a+1,b);
		
	}
	if(museum[a][b+1]==0 && visit[a][b+1]==0)
	{
		visit[a][b+1] = 1;
		cek(a,b+1);
		
	}

	return;
}
void replace(int a,int b)
{
	//printf("%d %d\n",a,b);
	museum[a][b] = ans;
	visit[a][b] = 0;
	if(visit[a-1][b]==1) 
	{
		visit[a-1][b] = 0;	
		replace(a-1,b);
		
	}
	if(visit[a][b-1]==1) 
	{
		visit[a][b-1] = 0;
		replace(a,b-1);
			
	}
	if(visit[a+1][b]==1)
	{
		visit[a+1][b] =0;
		replace(a+1,b);
		
	}
	if(visit[a][b+1]==1)
	{
		visit[a][b+1] = 0;
		replace(a,b+1);
		
	}
	return;
}
int main()
{
	scanf("%d %d %d",&m,&n,&q);
	for(int i=1;i<=m;i++)
	{
		scanf("%s",x);
		for(int j=0;j<n;j++)
		{
			if(x[j]=='*') museum[i][j+1] = -1;
			else if(x[j]=='.') museum[i][j+1] = 0;
		}
	}

	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			ans = 0;
			if(museum[i][j]==0 && visit[i][j]!=1) 
			{
				cek(i,j);
				//printf("ans = %d\n",ans);
				replace(i,j);
			}
		}
	}
//	
//	for(int i=1;i<=m;i++)
//	{
//		for(int j=1;j<=n;j++)
//		{
//			printf("%d ",museum[i][j]);
//		}
//		printf("\n");
//	}
	while(q--)
	{
		scanf("%d %d",&a,&b);
		printf("%d\n",museum[a][b]);
	}
	return 0;
}