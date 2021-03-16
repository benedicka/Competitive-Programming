#include<bits/stdc++.h>
using namespace std;
struct point
{
	double x,y;
};
bool cross(point a ,point b, point c)
{
	double ax,ay,bx,by;
	ax = a.x-b.x;
	ay = a.y-b.y;
	bx = c.x-b.x;
	by = c.y-b.y;
	if(ax*by-ay*bx > 0) return 1;
	else return 0;
}
bool cmp(point a,point b)
{
	return ((a.x<b.x) || (a.x == b.x && a.y<b.y));
}
vector < point > monotone_chain(vector < point > pts)
{
	int sz = pts.size();
	point cek1,cek2; 
    vector< point > res;
	sort(pts.begin(), pts.end(),cmp);
	stack < point > lh,uh;
	uh.push(pts[0]);
	cek1 = pts[0];
	uh.push(pts[1]);
	cek2 = pts[1];
	for(int i=2;i<sz;i++)
	{
		while(uh.size()>2 && cross(cek1,cek2,pts[i]))
		{
			uh.pop();
			cek2 = uh.top();
			uh.pop();
			cek1 = uh.top();
			uh.push(cek2);
		}
		if(uh.size()<=2 && cross(cek1,cek2,pts[i]))
		{
			uh.pop();
		}
		cek1 = uh.top();
		uh.push(pts[i]);
		cek2 = pts[i];
	}
	lh.push(pts[sz-1]);
	cek1 = pts[sz-1];
	lh.push(pts[sz-2]);
	cek2 = pts[sz-2];
	for(int i=sz-3;i>=0;i--)
	{
		while(lh.size()>2 && cross(cek1,cek2,pts[i]))
		{
			lh.pop();
			cek2 = lh.top();
			lh.pop();
			cek1 = lh.top();
			lh.push(cek2);
		}
		if(lh.size()<=2 && cross(cek1,cek2,pts[i]))
		{
			lh.pop();
		}
		cek1 = lh.top();
		lh.push(pts[i]);
		cek2 = pts[i];
	}
	while(!lh.empty())
	{
		res.push_back(lh.top());	
		lh.pop();		
	}
	uh.pop();
	while(!uh.empty())
	{
		res.push_back(uh.top());
		uh.pop();
	}
	
	reverse(res.begin(),res.end());
	return res;
}
bool onSegment(point p, point q, point r) 
{ 
    if (q.x <= max(p.x, r.x) && q.x >= min(p.x, r.x) && q.y <= max(p.y, r.y) && q.y >= min(p.y, r.y)) return 1; 
    return 0; 
} 
int orientation(point p, point q, point r) 
{ 
    double val = (q.y - p.y) * (r.x - q.x) - (q.x - p.x) * (r.y - q.y); 
  	if (val == 0.0) return 0;  // colinear 
    return (val > 0.0)? 1: 2; // clock or counterclock wise 
}
bool doIntersect(point p1, point q1, point p2, point q2) 
{ 
    int o1 = orientation(p1, q1, p2); 
    int o2 = orientation(p1, q1, q2); 
    int o3 = orientation(p2, q2, p1); 
    int o4 = orientation(p2, q2, q1); 
    if (o1 != o2 && o3 != o4)  return 1;
    if (o1 == 0 && onSegment(p1, p2, q1)) return 1; 
    if (o2 == 0 && onSegment(p1, q2, q1)) return 1; 
    if (o3 == 0 && onSegment(p2, p1, q2)) return 1; 
    if (o4 == 0 && onSegment(p2, q1, q2)) return 1; 
    return 0;
} 
bool isInside(vector < point > polygon, point p) 
{ 
	polygon.push_back(p);
	polygon = monotone_chain(polygon);
	for(int i=0;i<polygon.size();i++)
	{
		if(p.x==polygon[i].x && p.y==polygon[i].y) return 0;
	}
	return 1;
} 
int main()
{
	int t,n,m,cnt;
	vector < point > pts;
	point pt;
	double x1,x2,y1,y2;
	scanf("%d",&t);
	for(int tc=1;tc<=t;tc++)
	{
		if(tc>1) printf("\n");
		pts.clear();
		scanf("%d %d",&n,&m);
		for(int i=0;i<n;i++)
		{
			scanf("%lf %lf",&pt.x,&pt.y);
			pts.push_back(pt);
		}
		pts = monotone_chain(pts);
		printf("Case %d\n",tc);
		for(int i=0;i<pts.size();i++)
		{
			printf("%.0lf %.0lf\n",pts[i].x,pts[i].y);
		}
		pts.resize(pts.size()-1);
		for(int i=0;i<m;i++)
		{
			cnt = 0;
			scanf("%lf %lf",&pt.x,&pt.y);
			printf("%.0lf %.0lf %s\n",pt.x,pt.y,isInside(pts,pt)?"is unsafe!":"is safe!");
		}
	}	
	return 0;
}