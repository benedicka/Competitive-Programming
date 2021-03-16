#include<bits/stdc++.h>
using namespace std;
int ans,n,m,k,x,y,board=1;
int mkX[] = { 2, 1, -1, -2, -2, -1, 1, 2 },mkY[] = { 1, 2, 2, 1, -1, -2, -2, -1 }; 
bool safe[1010][1010];
char b[1010][1010];
bool visit(int pX,int pY)
{
	if(pX<0 ||pX>=n) return 0;
	if(pY<0 ||pY>=m) return 0;
	if(b[pX][pY]!='.') return 0;
	if(!safe[pX][pY]) ans--;
	safe[pX][pY] = 1;
	return 1;
}
int main()
{
	while(scanf("%d %d",&n,&m)!=EOF)
	{
		if(n==0 && m==0) break;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				safe[i][j] = 0;
				b[i][j] = '.';
			}
		}
		ans = n*m;
		for(int a=0;a<3;a++)
		{
			scanf("%d",&k);
			for(int i=0;i<k;i++)
			{
				scanf("%d %d",&x,&y);
				x--;
				y--;
				switch(a)
				{
					case 0:
						visit(x,y);
						b[x][y] = 'q';
						break;
					case 1:
						visit(x,y);
						b[x][y] = 'k';
						break;
					case 2:
						visit(x,y);
						b[x][y] = 'p';
						break;
				}
			}	
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(b[i][j]=='.') continue;
				if(b[i][j]=='k')
				{
					for(int z=0;z<8;z++)
					{
						visit(i+mkX[z],j+mkY[z]);
					}
				}
				else if(b[i][j]=='q')
				{
					for(int z=1;z<n;z++)
					{
						if(!visit(i+z,j)) break;
					}
					for(int z=1;z<n;z++)
					{
						if(!visit(i-z,j)) break;
					}
					for(int z=1;z<m;z++)
					{
						if(!visit(i,j+z)) break;
					}
					for(int z=1;z<m;z++)
					{
						if(!visit(i,j-z)) break;
					}
					for(int z=1;z<max(n,m);z++)
					{
						if(!visit(i-z,j-z)) break;
					}
					for(int z=1;z<max(n,m);z++)
					{
						if(!visit(i+z,j+z)) break;
					}
					for(int z=1;z<max(n,m);z++)
					{
						if(!visit(i+z,j-z)) break;
						
					}
					for(int z=1;z<max(n,m);z++)
					{
						if(!visit(i-z,j+z)) break;
						
					}
				}
			}
		}
//		for(int i=0;i<n;i++)
//		{
//			for(int j=0;j<m;j++)
//			{
//				printf("%d%c ",safe[i][j],b[i][j]);
//			}
//			printf("\n");
//		}
		printf("Board %d has %d safe squares.\n",board++,ans);
	}
	return 0;
}