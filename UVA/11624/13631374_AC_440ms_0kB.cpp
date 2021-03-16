#include<queue>
#include<stdio.h>
#include<utility>
using namespace std;
int t,r,c,a,joe[1010][1010],fire[1010][1010],m1[4] = {1,-1,0,0},m2[4] = {0, 0,1,-1},x,y,time;
queue  < pair< int , pair < int , int > > >jo;
queue < pair < int ,  pair < int , int > > > f;
char input[1010][1010];
int main()
{
	
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&r,&c);
		for(int i=0;i<r;i++)
		{
			scanf("%s",input[i]);
			for(int j=0;j<c;j++)
			{
				joe[i][j] = -1;
				fire[i][j] = -1;
				if(input[i][j]=='J')
				{
					joe[i][j] = 0;
					jo.push(make_pair(0,make_pair(i,j)));
				}
				else if(input[i][j] =='F') 
				{
					fire[i][j] = 0;
					f.push(make_pair(0,make_pair(i,j)));
				}
				else if(input[i][j] == '#')joe[i][j] = -2;
			}
		}
		while(!jo.empty())
		{
			time = jo.front().first+1;
			x = jo.front().second.first;
			y = jo.front().second.second;
			for(int i=0;i<4;i++)
			{
				if(x+m1[i]>=0 && x+m1[i]<r && y+m2[i]>=0 && y+m2[i]<c &&(joe[x+m1[i]][y+m2[i]]==-1 || time < joe[x+m1[i]][y+m2[i]]) )
				{
					joe[x+m1[i]][y+m2[i]] = time;
					jo.push(make_pair(time,make_pair(x+m1[i],y+m2[i])));
				}
			}
			jo.pop();
		}
		
		while(!f.empty())
		{
			time = f.front().first+1;
			x = f.front().second.first;
			y = f.front().second.second;
			for(int i=0;i<4;i++)
			{
				if(x+m1[i]>=0 && x+m1[i]<r && y+m2[i]>=0 && y+m2[i]<c && (time<fire[x+m1[i]][y+m2[i]] || fire[x+m1[i]][y+m2[i]]==-1 )&& input[x+m1[i]][y+m2[i]]!='#')
				{
					f.push(make_pair(time,make_pair(x+m1[i],y+m2[i])));
					fire[x+m1[i]][y+m2[i]] = time;
				}
			}
			f.pop();
		}
		time = -1;
//		for(int i=0;i<r;i++)
//		{
//			for(int j=0;j<c;j++)
//			{
//				printf("%-2d ",joe[i][j]);
//			}
//			printf("\n");
//		}
//		printf("\n");
//		for(int i=0;i<r;i++)
//		{
//			for(int j=0;j<c;j++)
//			{
//				printf("%-2d ",fire[i][j]);
//			}
//			printf("\n");
//		}
		for(int i=0;i<r;i++)
		{
			if(joe[i][0]>=0 && (joe[i][0]<fire[i][0] || fire[i][0]==-1) && (joe[i][0]<time || time==-1)) time = joe[i][0];
			if(joe[i][c-1]>=0 && (joe[i][c-1]<fire[i][c-1] || fire[i][c-1]==-1)&& (joe[i][c-1]<time || time==-1)) time = joe[i][c-1];
		}
		for(int i=0;i<c;i++)
		{
			if(joe[0][i]>=0 && (joe[0][i]<fire[0][i] || fire[0][i]==-1) && (joe[0][i]<time || time==-1)) time = joe[0][i];
			if(joe[r-1][i]>=0 && (joe[r-1][i]<fire[r-1][i] || fire[r-1][i]==-1)&& (joe[r-1][i]<time || time==-1)) time = joe[r-1][i];
		}
		if(time==-1) printf("IMPOSSIBLE\n");
		else printf("%d\n",time+1);
	}
	
	return 0;
}