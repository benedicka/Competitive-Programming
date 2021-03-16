#include<stdio.h>
#include<string.h>
bool ok;
int maze [110][110];
int t,m,n,start1,start2,length,c,s;
char input[110];
bool flag[110][110];
void walk(int x,int y,int step)
{
	if(maze[x][y]==3)
	{
		if(s==0)  s = step;
		else if(s>step) s = step;
		ok = 1;
		//printf("%d\n",s);
		return;	
	}
	//printf("%d %d\n",x,y);
	
	if(maze[x+1][y]!=0 && flag[x+1][y]==0) 
	{
		flag[x+1][y] =1;
		walk(x+1,y,step+1);
		flag[x+1][y] = 0;
	}
	if(maze[x][y+1]!=0 && flag[x][y+1]==0) 
	{
		flag[x][y+1] =1;
		walk(x,y+1,step+1);
		flag[x][y+1] = 0;
	}
	if(x>0 && maze[x-1][y]!=0 && flag[x-1][y]==0)
	{
		flag[x-1][y] =1;
		walk(x-1,y,step+1);
		flag[x-1][y] = 0;
	}
	if(y>0 && maze[x][y-1]!=0 && flag[x][y-1]==0)
	{
		flag[x][y-1] =1;
		walk(x,y-1,step+1);
		flag[x][y-1] = 0;
	}	
	return;
}
int main()
{

	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&m,&n);
		ok = 0;
		for(int i=0;i<m;i++)
		{
			scanf("%s",&input);
			length = strlen(input);
			s = 0;
			for(int j=0;j<length;j++)
			{
				flag[i][j] = 0;
				if(input[j]=='*') maze[i][j] = 0;
				else if(input[j]=='$')
				{
					maze[i][j] = 1;
					start1 = i;
					start2 = j;
				}
				else if(input[j]=='O')maze[i][j] = 2;
				else if(input[j]=='#')maze[i][j] = 3;
			}
		}
		flag[start1][start2] = 1;
		//printf("tujuan = %d\n",maze [0][2]);
		walk(start1,start2,0);
		if(ok==0) printf("-1\n");
		else printf("%d\n",s);
	}
	return 0;
}