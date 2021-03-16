#include<stdio.h>
#include<utility>
#include<stack>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
vector < pair <double , double > > list;
map < pair < double , double > , bool > mp;
stack < pair < double , double > > uh;//UPPER HULL
stack < pair < double , double > > lh;//LOWER HULL
pair<double , double > cek1;
pair<double , double > cek2;
int n,m,s;
double x,y;
bool msk;
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
void monotonechain()
{
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
		
		//printf("%lf %lf %lf %lf\n",cek1.first,cek1.second,cek2.first,cek2.second);
	}
}
bool ok()
{
	while(!uh.empty())
	{
		//printf("uh = %lf %lf\n",uh.top().first,uh.top().second);
		if(mp[uh.top()]!=1) return 0;
		uh.pop();
	}
	while(!lh.empty())
	{
	//	printf("lh = %lf %lf\n",lh.top().first,lh.top().second);
		if(mp[lh.top()]!=1) return 0;
		lh.pop();
	}
	return 1;
}
int main()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%lf %lf",&x,&y);
		list.push_back(make_pair(x,y));
		mp[make_pair(x,y)] = 1;
	}	
	scanf("%d",&m);
	for(int i=0;i<m;i++)
	{
		scanf("%lf %lf",&x,&y);
		list.push_back(make_pair(x,y));
		mp[make_pair(x,y)] = 0;
	}
	sort(list.begin(),list.end());
	s = list.size();
//	printf("sort:\n");
//	for(int i=0;i<s;i++)
//	{
//		printf("%lf %lf\n",list[i].first,list[i].second);
//	}
//	printf("\n\n");
	monotonechain();
	if(ok()) printf("YES\n");
	else printf("NO\n");
	return 0;
}