#include<stdio.h>
#include<utility>
#include<math.h>
#include<algorithm>
#include<stack>
#include<vector>
using namespace std;
int t,n,s;
pair < double , double > list[1010];
double ans;
stack < pair < double , double > > uh;//UPPER HULL
stack < pair < double , double > > lh;//LOWER HULL
pair<double , double > cek1;
vector < pair <double , double > > luar;
pair<double , double > cek2;
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
	luar.clear();
	uh.push(list[0]);
	cek1 = list[0];
	uh.push(list[1]);
	cek2 = list[1];
	for(int i=2;i<n;i++)
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
	lh.push(list[n-1]);
	cek1 = list[n-1];
	lh.push(list[n-2]);
	cek2 = list[n-2];
	for(int i=n-3;i>=0;i--)
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
		ans = max(ans,dist(luar[i-1],luar[i]));
	}
	//printf("kel = %.lf\n",ans);
}

int main()
{
	scanf("%d",&t);
	while(t--)
	{
		ans = -1;
		scanf("%d",&n);
		for(int i =0;i<n;i++)
		{
			scanf("%lf %lf",&list[i].first,&list[i].second);
		}
		if(n>4)
		{
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<n;j++)
				{
					if(i!=j)
					{
						ans = max(ans,dist(list[i],list[j]));
					}
				}
			}
		}
		else
		{
			sort(list,list+n);
			monotonechain();
		}
		printf("%.10lf\n",ans);
	}
	return 0;
}