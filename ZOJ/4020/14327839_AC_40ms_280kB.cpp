#include<stdio.h>
#include<queue>
#include<utility>
#include<vector>
using namespace std;
int t,n,m,x,y,cnt,s1,s2,f1,f2,ti,b,status;
int m1[5] = {1,-1,0,0};
int m2[5] = {0,0,1,-1};
bool valid(int a,int b)
{
	if(a<0 || a>=n) return 0;
	if(b<0 || b>=m) return 0;
	return 1;
}
int change(int x)
{
	if(x%2==0) return 0;
	return 1;
}
	

int main()
{	
	bool visit[300010];
	int field[300010];
	queue< pair < int , pair < int , int > > > q;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&n,&m);
		for(int i=0;i<n*m;i++)
		{
			scanf("%d",&x);
			field[i] = x;
			visit[i] = 0;
		}
		scanf("%d %d %d %d",&s1,&s2,&f1,&f2);
		s1-=1;
		s2-=1;
		f1-=1;
		f2-=1;
		cnt = n*m+100;
		ti = 0;
		q.push(make_pair(0,make_pair(s1,s2)));
		while(!q.empty())
		{
			ti = q.front().first;
			x = q.front().second.first;
			y = q.front().second.second;
			//printf("curr = %d %d",x,y);
			if(x==f1 && y==f2)
			{
				if(cnt>ti)cnt = ti;
			}
			status = field[x*m+y]+change(ti);
		//	printf("cek = %d\n",status);
			if(status>1)status = 0;
			if(status==0)
			{
				for(int i=0;i<2;i++)
				{
					if(valid(x+m1[i],y+m2[i]) && !visit[(x+m1[i])*m+y+m2[i]])
					{
						q.push(make_pair(ti+1,make_pair(x+m1[i],y+m2[i])));
						visit[(x+m1[i])*m+y+m2[i]]= 1;
					}
				}
			}
			else
			{
				for(int i=2;i<4;i++)
				{
					if(valid(x+m1[i],y+m2[i]) && !visit[(x+m1[i])*m+y+m2[i]])
					{
						q.push(make_pair(ti+1,make_pair(x+m1[i],y+m2[i])));
						visit[(x+m1[i])*m + y+m2[i]] = 1;
					}
				}
			}
			q.pop();
		}
		if(cnt>n*m) printf("-1\n");
		else printf("%d\n",cnt);
	}
	return 0;
}