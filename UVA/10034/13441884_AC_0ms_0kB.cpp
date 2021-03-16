#include<stdio.h>
#include<queue>
#include<math.h>
#include<stdlib.h>
using namespace std;
int parent[110];

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
double hitung (double a, double b)
{
	double s1 = a*a;
	double s2 = b*b;
	return (sqrt(s1+s2));
}
int main()
{
	int t,n;
	double x[110],y[110];
	double ans,count;
	priority_queue < pair < double , pair < int , int > > >pq;
	pair < double , pair < int , int > > f;
	scanf("%d",&t);
	for(int tc=0;tc<t;tc++)
	{
		ans = 0;
		scanf("%d",&n);
		for(int i=0;i<n;i++)
		{
			parent[i] = i;
			scanf("%lf %lf",&x[i],&y[i]);
			//printf("x = %lf y = %lf\n",x[i],y[i]);
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(i!=j)
				{
					count = hitung(abs(x[i]-x[j]),abs(y[i]-y[j]));
					pq.push(make_pair(count*-1, make_pair(i,j)));
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
		if(tc<t-1) printf("\n");
	}
	
	
	
	
	return 0;
}