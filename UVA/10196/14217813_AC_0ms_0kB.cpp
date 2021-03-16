#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
char board[10][10];
int cnt,tc,bx,by,wx,wy;
bool checkrock(int x,int y, int kx, int ky, char king)
{
    if(x != kx && y != ky) return 0;
    for(int i=x+1; i<8; i++)
    {
        if(board[i][y] == king) return 1; 
		else if(isalpha(board[i][y]) && board[i][y] != king) break;
    }
    for(int i=x-1; i>=0; i--)
    {
        if(board[i][y] == king) return 1;
        else if(isalpha(board[i][y]) && board[i][y] != king) break;
    }
    for(int i=y+1; i<8; i++)
    {
        if(board[x][i] == king) return 1;
        else if(isalpha(board[x][i]) && board[x][i] != king) break;
    }
    for(int i=y-1; i>=0; i--)
    {
        if(board[x][i] == king) return 1;
        else if(isalpha(board[x][i]) && board[x][i] != king) break;
    }
    return 0;
}
bool checkbishop(int x, int y, int kx, int ky, char king)
{
    if(abs(kx-x)-abs(ky-y)!=0) return 0;
    int a,b;
	a=x+1;
	b=y+1;
	while(a<8 && b<8)
    {
        if(board[a][b] == king) return 1;
        else if(isalpha(board[a][b]) && board[a][b] != king) break;
        a++;
        b++;
    } 
	a=x-1;
	b=y+1;
    while(a>=0 & b<8)
    {
        if(board[a][b] == king) return 1;
        else if(isalpha(board[a][b]) && board[a][b] != king) break;
        a--;
        b++;
    }
	a=x+1;
	b=y-1;
    while(a<8 && b>=0)
    {
        if(board[a][b] == king) return 1;
        else if(isalpha(board[a][b]) && board[a][b] != king) break;
        a++;
        b--;
    }	
    a=x-1;
    b=y-1;
    while(a>=0 && b>=0)
    {
        if(board[a][b] == king)return 1;
        else if(isalpha(board[a][b]) && board[a][b] != king)break;
        a--;
        b--;
    }
	return 0;
}
bool checkknight(int x, int y, char king)
{
    if(x-2>=0 && y-1>=0 && board[x-2][y-1] == king) return 1;
    else if(x-1>=0 && y-2>=0 && board[x-1][y-2] == king) return 1;
    else if(x+1<8 && y-2>=0 && board[x+1][y-2] == king) return 1;
    else if(x+2<8 && y-1>=0 && board[x+2][y-1] == king) return 1;
    else if(x+2<8 && y+1<8 && board[x+2][y+1] == king) return 1;
    else if(x+1<8 && y+2<8 && board[x+1][y+2] == king) return 1;
    else if(x-1>=0 && y+2<8 && board[x-1][y+2] == king) return 1;
    else if(x-2>=0 && y+1<8 && board[x-2][y+1] == king) return 1;
    else return 0;
}
bool checkpawnwhite(int x,int y,char king)
{
    if(x-1 >=0 && y-1 >=0 && board[x-1][y-1] == king) return 1;
    else if(x-1 >=0 && y+1<8 && board[x-1][y+1] == king) return 1;
    else return 0;
}

bool checkpawnblack(int x,int y,char king)
{
    if(x+1<8 && y-1 >=0 && board[x+1][y-1] == king)return 1;
    else if(x+1<8 && y+1<8 && board[x+1][y+1] == king)return 1;
    else return 0;
}
bool black()
{
    for(int i=0; i<8; i++)
    {
    	for(int j=0; j<8; j++)
        {
        	if(board[i][j] == 'R')
            {
                if(checkrock(i,j,bx,by,'k')) return 1;
            }
            else if(board[i][j] == 'B')
            {
            	if(checkbishop(i,j,bx,by,'k')) return 1;
            }
            else if(board[i][j] == 'Q')
            {
                if(checkrock(i,j,bx,by,'k') || checkbishop(i,j,bx,by,'k')) return 1;
            }
            else if(board[i][j] == 'N')
            {
                if(checkknight(i, j,'k')) return 1;
            }
            else if(board[i][j] == 'P')
            {
                if(checkpawnwhite(i,j,'k')) return 1;
            }
        }
	}
    return 0;
}
bool white()
{
    for(int i=0; i<8; i++)
    {
    	for(int j=0; j<8; j++)
        {
        	if(board[i][j] == 'r')
            {
                if(checkrock(i,j,wx,wy,'K')) return 1;
            }
            else if(board[i][j] == 'b')
            {
                if(checkbishop(i,j,wx,wy,'K')) return 1;
            }
            else if(board[i][j] == 'q')
            {
                if(checkrock(i,j,wx,wy,'K') || checkbishop(i,j,wx,wy,'K')) return 1;
            }
            else if(board[i][j] == 'n')
            {
                if(checkknight(i, j,'K')) return 1;
            }
            else if(board[i][j] == 'p')
            {
                if(checkpawnblack(i,j,'K')) return 1;
            }
        }
	}
    return 0;
}

int main()
{
	tc = 1;
	while(1)
	{
		cnt = 0;
		for(int i=0;i<8;i++)
		{	
			scanf("%s",board[i]);
			for(int j=0;j<8;j++)
			{	
				if(board[i][j]=='K')
				{
					wx = i;
					wy = j;
				}
				else if(board[i][j]=='k')
				{
					bx = i;
					by = j;
				}
			}
			if(strcmp(board[i],"........")==0) cnt++;
		}
		if(cnt==8) break;
		printf("Game #%d:",tc);tc++;	
		if(black()) printf(" black king is in check.\n");
		else if(white()) printf(" white king is in check.\n");
		else printf(" no king is in check.\n");
	}	
	return 0;
}