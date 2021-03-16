#include<stdio.h>
#include<string.h>
int x,y,l,cnt;
char m,board[10][10];
bool valid;
int main()
{
	cnt = 0;
	while(1)
	{
		valid = 1;
		cnt++;
		
		for(int i=0;i<5;i++)
		{
			scanf("%[^\n]%*c",&board[i]);
			//printf("%s\n",board[i]);
			if(board[0][0]=='Z') break;
		}
		if(board[0][0]=='Z') break;
		if(cnt!=1) printf("\n");
		for(int i=0;i<5;i++)
		{
			for(int j=0;j<5;j++)
			{
				if(board[i][j]==' ')
				{
					x = i;
					y = j;
				}
			}
		}
		//printf("%d %d\n",x,y);
		
		while(1)
		{
			m = getchar();
			if(m=='0') break;
			if(valid)
			{
				if(m=='B')
				{
					if(x+1>=5)
					{
						valid = 0;
						//break;
					}
					board[x][y] = board[x+1][y];
					board[x+1][y] = ' ';
					x+=1;
				}
				else if(m=='A')
				{
					if(x-1<0)
					{
						valid = 0;
						//break;
					}
					board[x][y] = board[x-1][y];
					board[x-1][y] = ' ';
					x-=1;
				}
				else if(m=='L')
				{
					if(y-1<0)
					{
						valid = 0;
						//break;
					}
					board[x][y] = board[x][y-1];
					board[x][y-1] = ' ';
					y-=1;
				}
				if(m=='R')
				{
					if(y+1>=5)
					{
						valid = 0;
						//break;
					}
					board[x][y] = board[x][y+1];
					board[x][y+1] = ' ';
					y+=1;
				}
			}
			
		}
		printf("Puzzle #%d:\n",cnt);
		if(!valid) printf("This puzzle has no final configuration.\n");
		else
		{
			for(int i=0;i<5;i++)
			{
				for(int j=0;j<5;j++)
				{
					printf("%c",board[i][j]);
					if(j!=4) printf(" ");
				}
				printf("\n");
			}
		}
		getchar();
	}
	
	return 0;
}