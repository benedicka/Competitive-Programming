#include<stdio.h>
#include<queue>
#include<math.h>
#include<stdlib.h>
using namespace std;
int parent[510];

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
	int t,n,m,c;
	double x[510],y[510];
	double ans,count;
	priority_queue < pair < double , pair < int , int > > >pq;
	priority_queue < double >pq2;
	pair < double , pair < int , int > > f;
	scanf("%d",&t);
	for(int tc=0;tc<t;tc++)
	{
		ans = -1;
		c = 0;
		scanf("%d %d",&m,&n);
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
					//printf("%d %d %lf\n",i,j,count);
					pq.push(make_pair(-1*count, make_pair(i,j)));
				}
			}
		}
		
		while(!pq.empty())
		{
			f = pq.top();
			if(!sameparent(f.second.first,f.second.second))
			{
	
				//printf("%d %d %lf\n",f.second.first,f.second.second,-1*f.first);
				
				pq2.push(-1*f.first);
				unionset(f.second.first,f.second.second);
			}
			pq.pop();
		}
		while(!pq2.empty())
		{
			
			if(c==m-1) ans = pq2.top();
			c++;
			pq2.pop();
		}
		printf("%.2lf\n",ans);
		
	}
	
	
	
	
	return 0;
}