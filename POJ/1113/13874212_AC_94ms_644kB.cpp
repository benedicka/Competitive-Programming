#include<stdio.h>
#include<utility>
#include<stack>
#include<vector>
#include<algorithm>
#include<math.h>
#define  pi 3.14159265358979323846
using namespace std;
vector < pair <double , double > > list;
vector < pair <double , double > > luar;
stack < pair < double , double > > uh;//UPPER HULL
stack < pair < double , double > > lh;//LOWER HULL
pair<double , double > cek1;
pair<double , double > cek2;
int n,s;
double x,y,r,ans;
bool cross(double x1, double y1 , double x2 , double y2 , double x3 , double y3)
{
	double ax,ay,bx,by;
	ax = x1-x2;
	ay = y1-y2;
	bx = x3 - x2;
	by = y3 - y2;
	//printf("(%lf,%lf) (%lf,%lf) (%lf,%lf) cross = %lf\n",x1,y1,x2,y2,x3,y3,ax*by-ay*bx);
	if(ax*by-ay*bx > 0) return 1;
	else return 0;
}
double dist(pair < double , double > p1, pair < double ,double > p2)
{
	double x,y;
	x = p1.first-p2.first;
	y = p1.second-p2.second;
	return sqrt((x*x)+(y*y));
}
void monotonechain()
{
	s = list.size();
	sort(list.begin(),list.end());
	uh.push(list[0]);
	cek1 = list[0];
	uh.push(list[1]);
	cek2 = list[1];
	for(int i=2;i<s;i++)
	{
	
			while(uh.size()>2 && cross(cek1.first,cek1.second,cek2.first,cek2.second,list[i].first,list[i].second))
			{
				//printf("%lf %lf %lf %lf\n",cek1.first,cek1.second,cek2.first,cek2.second);
				uh.pop();
				cek2 = uh.top();
				uh.pop();
				cek1 = uh.top();
				uh.push(cek2);
			}
			if(uh.size()<=2 && cross(cek1.first,cek1.second,cek2.first,cek2.second,list[i].first,list[i].second))
			{
				uh.pop();
			}
			cek1 = uh.top();
			uh.push(list[i]);
			cek2 = list[i];
		
	}
	
	//puts("A");
	lh.push(list[s-1]);
	cek1 = list[s-1];
	lh.push(list[s-2]);
	cek2 = list[s-2];
	for(int i=s-3;i>=0;i--)
	{
		while(lh.size()>2 && cross(cek1.first,cek1.second,cek2.first,cek2.second,list[i].first,list[i].second))
		{
			//printf("%lf %lf %lf %lf\n",cek1.first,cek1.second,cek2.first,cek2.second);
			lh.pop();
			cek2 = lh.top();
			lh.pop();
			cek1 = lh.top();
			lh.push(cek2);
		}
		if(lh.size()<=2 && cross(cek1.first,cek1.second,cek2.first,cek2.second,list[i].first,list[i].second))
		{
			lh.pop();
		}
		cek1 = lh.top();
		lh.push(list[i]);
		cek2 = list[i];
	}
	while(!uh.empty())
	{
		luar.push_back(uh.top());
		//printf("%lf %lf\n",uh.top().first,uh.top().second);
		uh.pop();
	}
	
	while(!lh.empty())
	{
		luar.push_back(lh.top());	
		//printf("%lf %lf\n",lh.top().first,lh.top().second);
		lh.pop();		
	}
	s = luar.size();
	for(int i=1;i<s;i++)
	{
		ans+=(dist(luar[i-1],luar[i]));
	}
	//printf("kel = %.lf\n",ans);
}

int main()
{
	ans = 0.0;
	scanf("%d %lf",&n,&r);
	while(n--)
	{
		scanf("%lf %lf",&x,&y);
		list.push_back(make_pair(x,y));
	}
	monotonechain();
	ans+=(pi*2*r);
	printf("%.d\n",(int)(ans+0.5));
	return 0;
}