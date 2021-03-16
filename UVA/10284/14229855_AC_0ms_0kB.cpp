#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<string>
#include<iostream>
using namespace std;
char board[10][10];
bool atk[10][10];
void checkrock(int x,int y)
{
	atk[x][y] = 1;
    for(int i=x+1; i<8; i++)
    {
		if(board[i][y]=='.')atk[i][y] =1; 
		else break;
    }
    for(int i=x-1; i>=0; i--)
    {
    	
        if(board[i][y]=='.')atk[i][y] = 1;
        else break;
    }
    for(int i=y+1; i<8; i++)
    {
    	
        if(board[x][i]=='.')atk[x][i] =1;
        else break;
    }
    for(int i=y-1; i>=0; i--)
    {
		if(board[x][i]=='.')atk[x][i] =1;
        else break;
    }
    return;
}
void checkbishop(int x, int y)
{
  	atk[x][y] = 1;
    int a,b;
	a=x+1;
	b=y+1;
	while(a<8 && b<8)
    {
        if(board[a][b]=='.')atk[a][b] =1;
        else break;
        a++;
        b++;
    } 
	a=x-1;
	b=y+1;
    while(a>=0 && b<8)
    {
        if(board[a][b]=='.')atk[a][b] =1;
        else break;
        a--;
        b++;
    }
	a=x+1;
	b=y-1;
    while(a<8 && b>=0)
    {
        if(board[a][b]=='.')atk[a][b] =1;
        else break;
        a++;
        b--;
    }	
    a=x-1;
    b=y-1;
    while(a>=0 && b>=0)
    {
       	if(board[a][b]=='.')atk[a][b] =1;
        else break;
        a--;
        b--;
    }
}
void checkknight(int x, int y)
{
	atk[x][y] = 1;
    if(x-2>=0 && y-1>=0)atk[x-2][y-1] =1;
   	if(x-1>=0 && y-2>=0)atk[x-1][y-2] =1;
   	if(x+1<8 && y-2>=0)atk[x+1][y-2] =1;
    if(x+2<8 && y-1>=0)atk[x+2][y-1] =1;
    if(x+2<8 && y+1<8)atk[x+2][y+1] =1;
    if(x+1<8 && y+2<8)atk[x+1][y+2] =1;
  	if(x-1>=0 && y+2<8)atk[x-1][y+2] =1;
    if(x-2>=0 && y+1<8)atk[x-2][y+1] =1;
}
void checkpawnwhite(int x,int y)
{
	atk[x][y] = 1;
    if(x-1 >=0 && y-1 >=0 ) atk[x-1][y-1] = 1;
    if(x-1 >=0 && y+1<8 ) atk[x-1][y+1] = 1;
    return;
}
void checkpawnblack(int x,int y)
{
	atk[x][y] = 1;
    if(x+1<8 && y-1 >=0 ) atk[x+1][y-1]=  1;
    if(x+1<8 && y+1<8 )atk[x+1][y+1]=  1;
    return;
}
void checkking(int x, int y)
{
	atk[x][y] = 1;
	if(x+1<8 && y-1>=0)atk[x+1][y-1]=  1;
    if(x+1<8 && y+1<8 )atk[x+1][y+1]=  1;
    if(x-1>=0 && y-1>=0) atk[x-1][y-1]=  1;
    if(x-1>=0 && y+1<8 )atk[x-1][y+1]=  1;
   	if(x-1>=0) atk[x-1][y]= 1;
   	if(x+1<8) atk[x+1][y] = 1;
   	if(y-1>=0) atk[x][y-1]= 1;
   	if(y+1<8) atk[x][y+1] = 1;
    return;
}

int main()
{
	char input[100000];
	while(scanf("%s",&input)!=EOF)
	{
		int l,c,r,cnt;
		c = r = cnt = 0;
		l = strlen(input);
		for(int i=0;i<l;i++)
		{
			if(isdigit(input[i]))
			{
				int tmp;
				tmp = input[i]-'0';
				for(int j=0;j<tmp;j++)
				{
					atk[c][r] = 0;
					board[c][r] = '.';
					r++;
				}
			}
			else if(input[i]=='/')
			{
				c+=1;
				r=0;
			}
			else
			{
				atk[c][r] = 1;
				board[c][r] = input[i];
				r++;
			}
		}
				
		for(int i=0; i<8; i++)
		{
    		for(int j=0; j<8; j++)
        	{
        		//if(board[i][j]!='.') atk[i][j] = 1;
        		if(board[i][j] == 'r' || board[i][j] == 'R')
            	{
                	checkrock(i,j);
            	}
            	else if(board[i][j] == 'b'|| board[i][j] == 'B')
            	{
                	checkbishop(i,j);
           		}
           		else if(board[i][j] == 'q'|| board[i][j] == 'Q')
            	{	
                	checkrock(i,j);
					checkbishop(i,j);
            	}	
            	else if(board[i][j] == 'n'|| board[i][j] == 'N')
            	{
               		checkknight(i, j);
            	}
            	else if(board[i][j] == 'p')
            	{
               		checkpawnblack(i,j);
            	}
            	else if(board[i][j] == 'P')
            	{
               		checkpawnwhite(i,j);
            	}
            	else if(board[i][j]=='k'|| board[i][j] == 'K')
            	{
            		checkking(i,j);
				}
        	}
		}
		for(int i=0;i<8;i++)
		{
			for(int j=0;j<8;j++)
			{
				if(!atk[i][j]) cnt++;
				//printf("%d ",atk[i][j]);
			}
//			printf("\t");
//			for(int j=0;j<8;j++)
//			{
//				printf("%c ",board[i][j]);
//			}
//			printf("\n");
		}
		printf("%d\n",cnt);
	}
	
	return 0;
}