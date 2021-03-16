#include<bits/stdc++.h>
using namespace std;
struct circle
{
	double px,py,r;
}c[1010];
int k,idx,a,b,parent[1010];
double x,y,nx,ny,r,mnx,mny,mxx,mxy,n,m;
bool ok=1,msk;
double dist(circle a,circle b)
{
	return sqrt((a.px-b.px)*(a.px-b.px) + (a.py-b.py)*(a.py-b.py));
}
int findparent(int x)
{
	if(parent[x]==x) return x;
	return parent[x] = findparent(parent[x]);
}
void merge (int x,int y)
{
	int tmp1=findparent(x),tmp2=findparent(y);
	parent[x] = parent[y] = min(tmp1,tmp2);
}
int main()
{
	scanf("%lf %lf %d",&n,&m,&k);	
	for(int i=0;i<k;i++)
	{
		parent[i] = i;
		scanf("%lf %lf %lf",&c[i].px,&c[i].py,&c[i].r);
		if(c[i].px-c[i].r <=0 && c[i].py-c[i].r<=0) ok = 0;
		if(c[i].px+c[i].r >=n && c[i].py+c[i].r>=m) ok = 0;
	}
	for(int i=0;i<k;i++)
	{
		for(int j=i+1;j<k;j++)
		{
			if(dist(c[i],c[j])<=c[i].r+c[j].r)
			{
				merge(i,j);
			}
		}
	}
	for(int i=0;i<k;i++)
	{
		mnx = n;
		mny = m;
		mxx = 0;
		mxy = 0;
		for(int j=0;j<k;j++)
		{
			if(findparent(i)==findparent(j))
			{
				mnx = min(mnx,max(c[j].px-c[j].r,(double)0));
				mny = min(mny,max((double)0,c[j].py-c[j].r));
				mxx = max(mxx,min(c[j].px+c[j].r,n));
				mxy = max(mxy,min(c[j].py+c[j].r,m));
			}
		}
		if(mnx==0 && mxx==n) ok = 0;
		if(mny==0 && mxy==m) ok = 0;
		if(mnx==0 && mny==0) ok = 0;
		if(mxx==n && mxy==m) ok = 0;
		if(!ok) break;
	}
	printf("%s\n",ok?"S":"N");
	return 0;
}
