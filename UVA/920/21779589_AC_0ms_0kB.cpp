#include<bits/stdc++.h>
using namespace std;
int t,n;
double x,y,ymax,xa,ya,ans,m,c;
pair < double , double > p[110];
double dist(double a, double b, double c, double d)
{
	return sqrt((a-c)*(a-c)+(b-d)*(b-d));
}
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(int i=0;i<n;i++)
		{
			scanf("%lf %lf",&x,&y);
			p[i] = make_pair(x,y);
		}
		sort(p,p+n);
		ymax = 0;
		ans = 0;
//		printf("cek : \n");
//		for(int i=0;i<n;i++)
//		{
//			printf("%lf %lf\n",p[i].first,p[i].second);
//		}
		for(int i=n-2;i>=0;i--)
		{
			x = p[i].first;
			y = p[i].second;
			if(y>ymax || i==n-2)
			{
				xa = p[i+1].first;
				ya = p[i+1].second;
				m = (ya-y)/(xa-x);
				c = ((-xa*(y-ya))/(x-xa))+ya;
				//printf("aa = %lf %lf %lf %lf %lf\n",x,y,xa,ya,c);
				xa = (ymax-c)/m;
				
				ans+=dist(x,y,xa,ymax);
				ymax = y;
			}
		}
		printf("%.2lf\n",ans);		
	}	
	return 0;
}