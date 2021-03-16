#include<stdio.h>
#include<queue>
#include<utility>
#include<math.h>
#include<stdlib.h>
using namespace std;
int parent[800];
double x[800],y[800];
int findparent(int a)
{
	if(parent[a]==a) return a;
	else
	{
		parent[a] = findparent(parent[a]);
		return parent[a];
	}
}
void unionset(int a , int b)
{
	int x = findparent(a);
	int y = findparent(b);
	if(x==y) return;
	else if(x<y) parent[y] = parent[x];
	else parent[x] = parent[y];
}
bool sameparent(int a , int b)
{
	if(findparent(a)==findparent(b)) return 1;
	else return 0;
}

int main()
{
	priority_queue < pair < double , pair < int , int > > > pq;
	pair < double , pair < int , int > > f;
	double ans,w;
	int n,connect,b1,b2;
	while(scanf("%d",&n)!=EOF)
	{
		ans = 0;	
		for(int i=1;i<=n;i++)
		{
			scanf("%lf %lf",&x[i],&y[i]);
			//printf("x = %d y = %d\n",x[i],y[i]);
			parent[i] = i;
		}
		scanf("%d",&connect);
		for(int i=0;i<connect;i++)
		{
			scanf("%d %d",&b1,&b2);
			unionset(b1,b2);
		}
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				if(i!=j)
				{
					double xx = x[i]-x[j];
					double yy = y[i]-y[j];
					w = xx*xx+yy*yy;
					w = sqrt(w);
					pq.push(make_pair(-1*w,make_pair(i,j)));	
				}
			}
		}
		while(!pq.empty())
		{
			f = pq.top();
			if(!sameparent(f.second.first,f.second.second))
			{
				unionset(f.second.first,f.second.second);
				ans+=(-1*f.first);	
			}
			pq.pop();
		}
		printf("%.2lf\n",ans);
	}
	
	
	return 0;
}