#include<string.h>
#include<stdio.h>
using namespace std;
bool visit[70][70],cnt[70][70];
int x,y,t,ans,l;
char move[130],atas,bawah,kiri,kanan;
int main()
{
	scanf("%d",&t);
	for(int tc=1;tc<=t;tc++)
	{
		atas = 1;
		ans = bawah = kiri = kanan = 0;
		for(int i=0;i<=66;i++)
		{
			for(int j=0;j<=66;j++)
			{
				visit[i][j] = 0;
				cnt[i][j] = 0;
			}
		}
		scanf("%d %d",&x,&y);
		scanf("%s",&move);
		l = strlen(move);
		visit[x][y] = 1;
		for(int i=0;i<l;i++)
		{
		//	printf("%d %d -> ",x,y);
			if(move[i]=='F')
			{
				if(atas)
				{
					y++;
					if(visit[x][y] && !cnt[x][y])
					{
						ans++;
						cnt[x][y] = 1;
					} 
					visit[x][y] = 1;
				}
				else if(bawah)
				{
					y--;
					if(visit[x][y] && !cnt[x][y])
					{
						ans++;
						cnt[x][y] = 1;
					} 
					visit[x][y] = 1;
				}
				else if(kanan)
				{
					x++;
					if(visit[x][y] && !cnt[x][y])
					{
						ans++;
						cnt[x][y] = 1;
					} 
					visit[x][y] = 1;
				}
				else if(kiri)
				{
					x--;
					if(visit[x][y] && !cnt[x][y])
					{
						ans++;
						cnt[x][y] = 1;
					} 
					visit[x][y] = 1;
				}
			}
			else if(move[i]=='R')
			{
				if(atas)
				{
					atas = 0;
					kanan = 1;
				}
				else if(kanan)
				{
					kanan = 0;
					bawah = 1;
				}
				else if(kiri)
				{
					kiri = 0;
					atas = 1;
				}
				else if(bawah)
				{
					bawah = 0;
					kiri = 1;
				}
			}
			else if(move[i]=='L')
			{
				if(atas)
				{
					atas = 0;
					kiri = 1;
				}
				else if(kanan)
				{
					kanan = 0;
					atas = 1;
				}
				else if(kiri)
				{
					kiri = 0;
					bawah = 1;
				}
				else if(bawah)
				{
					bawah = 0;
					kanan = 1;
				}
			}
		//	printf("%d %d\n",x,y);
		}
		printf("Case #%d: %d %d %d\n",tc,x,y,ans);
	}
	return 0;
}