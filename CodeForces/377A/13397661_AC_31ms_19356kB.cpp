#include<stdio.h>
int a,b,jum;
int m1[4] = {0,0,1,-1};
int m2[4] = {1,-1,0,0};
char maze[510][510];
bool visit[510][510];
void f(int x,int y)
{
	if(jum==0) return;
	for(int i=0;i<4;i++)
	{
		if(visit[x+m1[i]][y+m2[i]]==0&& x+m1[i]>=0 && x+m1[i]<a && y+m2[i]>=0 && y+m2[i]<b && maze[x+m1[i]][y+m2[i]]=='.')
		{
			visit[x+m1[i]][y+m2[i]]=1;
			f(x+m1[i],y+m2[i]);
		}
	}
	if(jum==0) return;
	maze[x][y] = 'X';
	jum--;
	
}
int main()
{
	scanf("%d %d %d",&a,&b,&jum);
	for(int i=0;i<a;i++)
	{
		scanf("%s",&maze[i]);
	}
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<b;j++)
		{
			if(jum>0 && maze[i][j]=='.')
			{
				f(i,j);
				
			}
                       if(jum==0) break;
		}
		if(jum==0) break;
	}
	for(int i=0;i<a;i++)
	{
		printf("%s\n",maze[i]);
	}
	
return 0;
}