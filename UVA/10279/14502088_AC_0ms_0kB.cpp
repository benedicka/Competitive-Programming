#include<stdio.h>
#include<string.h>
char board[15][15],x[15][15];
bool mine;
int m1[18] = {1,-1,0,0,1,-1,1,-1};
int m2[18] = {0,0,1,-1,1,-1,-1,1};
bool valid(int x,int y,int n)
{
	if(x<0 ||y<0) return 0;
	if(x>=n || y>=n) return 0;
	return 1;
}
int main()
{
	int t,n;
	scanf("%d",&t);
	while(t--)
	{
		mine = 0;
		scanf("%d",&n);getchar();
		for(int i=0;i<n;i++)
		{
			scanf("%s",&board[i]);
		}
		getchar();
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				scanf("%c",&x[i][j]);
				if(board[i][j]=='*' && x[i][j]=='x') 
				{
					//printf("cek = %c %c %d %d\n",board[i][j],x[i][j],i,j);
					mine = 1;	
				}
			}
			getchar();
		}
//		printf("input :\n");
//		for(int i=0;i<n;i++)
//		{
//			printf("%s\n",x[i]);
//		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if((x[i][j]=='x' ))
				{
					if(board[i][j]=='*') printf("*");
					else 
					{
						//printf("%d %d\n",i,j);
						int cnt=0;
						for(int k=0;k<8;k++)
						{	
							if(valid(i+m1[k],j+m2[k],n) && board[i+m1[k]][j+m2[k]]=='*') 
							{
								cnt++;	
								//if(i==0 && j==2) printf("%d %d %c\n",i+m1[k],j+m2[k],board[i+m1[k]][j+m2[k]]);
							}
						}
						printf("%d",cnt);
					}
				}
				else if(mine==1) printf("%c",board[i][j]);
				else printf(".");
			}
			printf("\n");
		}
		if(t!=0) printf("\n");
	}
	return 0;
}