#include<bits/stdc++.h>
using namespace std;
int t,n;
double x[100010],ans,s;
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
			scanf("%lf",&x[i]);
		}
		sort(x,x+n);
		ans = 0;
		for(int i=0;i<n;i++)
		{
			if(i+2>=n) break;
			if(x[i+2]<x[i+1]+x[i])
			{
			//	printf("c : %lf %lf %lf\n",x[i],x[i+1],x[i+2]);
				s = x[i]+x[i+1]+x[i+2];
				s/=2;
				ans = max(ans,sqrt(s*(s-x[i])*(s-x[i+1])*(s-x[i+2]))); 
			}
		}
		printf("%.2lf\n",ans);
	}	
	return 0;
}