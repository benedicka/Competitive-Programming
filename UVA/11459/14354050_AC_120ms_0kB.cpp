#include<stdio.h>

int main()
{
	int t,a,b,c,player[100010],mv,x;
	bool win;
	scanf("%d",&t);
	while(t--)
	{
		int board[10010];
		scanf("%d %d %d",&a,&b,&c);
		win = 0;
		for(int i=0;i<=a;i++)
		{
			player[i] = 1;
		}
		for(int i=0;i<=100;i++)
		{
			board[i] = 0;
		}
		while(b--)
		{
			scanf("%d",&x);
			scanf("%d",&board[x]);
		}
		for(int i=0;i<c;i++)
		{
			scanf("%d",&mv);
			if(!win)
			{
				player[i%a]+=mv;
				if(board[player[i%a]]!=0) player[i%a] = board[player[i%a]];
				if(player[i%a]>=100) 
				{
					player[i%a] = 100;
					win = 1;
				}
			}	
		}
		for(int i=0;i<a;i++)
		{
			printf("Position of player %d is %d.\n",i+1,player[i]);
		}
	}
	return 0;
}