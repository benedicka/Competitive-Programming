#include<string.h>
#include<stdio.h>
char land,input[110][110];
int m,n,a,b,size,s;
bool visit[110][110],map[110][110];
void cek(int x,int y)
{
	if(visit[x][y]==0)s++;
	visit[x][y] = 1;
	
	if(map[x+1][y]==1 && visit[x+1][y]==0)
	{
		cek(x+1,y);
	}
	
	if(y+1<n && map[x][y+1]==1 && visit[x][y+1]==0)
	{
		cek(x,y+1);
	}
	else if(y+1==n && visit[x][n-1]==0 && map[x][n-1]==1)
	{
		cek(x,0);
	}
	
	if(x>0 && map[x-1][y]==1 && visit[x-1][y]==0)
	{
		cek(x-1,y);
	}

	
	if(y>0 && map[x][y-1]==1 && visit[x][y-1]==0)
	{
		cek(x,y-1);
	}
	else if(y==0 && map[x][n-1]==1 && visit[x][n-1]==0)
	{
		cek(x,n-1);
	}
	
	return;
}
void dodars(int x,int y)
{
	map[x][y] = 0;
	if(map[x+1][y]==1)
	{
		dodars(x+1,y);
	}
	if(y+1<n && map[x][y+1]==1)
	{
		dodars(x,y+1);
	}
	else if(y+1==n && visit[x][n-1]==0 && map[x][n-1]==1)
	{
		cek(x,0);
	}
	if(x>0 && map[x-1][y]==1)
	{
		dodars(x-1,y);
	}
	
	if(y>0 && map[x][y-1]==1)
	{
		dodars(x,y-1);
	}
	else if(y==0 && map[x][n-1]==1)
	{
		dodars(x,n-1);
	}
	return;
}
int main()
{
	while(scanf("%d %d",&m,&n)!=EOF)
	{
		size = 0;
		for(int i=0;i<m;i++)
		{
			scanf("%s",&input[i]);
		}
		scanf("%d %d",&a,&b);
		land = input[a][b];
		
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				visit[i][j] = 0;
				if(input[i][j]==land) map[i][j] = 1;
				else map[i][j] = 0;
			}
		}
		dodars(a,b);
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				s = 0;
				if(map[i][j]==1) cek(i,j);
				if(s>size) size =s;
			}
		}
		printf("%d\n",size);
	}
	
	
	
	return 0;
}