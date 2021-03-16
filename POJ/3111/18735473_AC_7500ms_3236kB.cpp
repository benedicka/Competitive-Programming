#include<iostream>
#include<algorithm>
#include<utility>
#include<stdio.h>
#include<math.h>
using namespace std;
double x[100010],y[100010],ans,l,r,m;
int n,k,cnt;
pair<double , int > tmp[100010];
bool cek()
{
	double res=0;	
	for(int i =0;i<n;i++)
	{
		tmp[i] = make_pair(-1*(x[i]-m*y[i]), i+1);
			
	}
	sort(tmp,tmp+n);
	for(int i=0;i<k;i++)
	{
		res-=tmp[i].first;
	}
//	printf("\n");
	return res>=0;
}
int main()
{
    scanf("%d %d",&n,&k);
	for(int i=0;i<n;i++)
	{
		scanf("%lf %lf",&x[i],&y[i]);
	}
	ans = 0;
	l = 0;
	r = 1000010;
	for(int i=0;i<50;i++)
	{
		m = (l+r)/2;
	//	printf("%lf %lf %lf\n",l,m,r);
		if(cek())
		{
			if(m>ans)
			{
				ans = m;
			}
			l = m;
		}
		else r = m;
	}
//	printf("%lf\n",ans);
	cnt = 0;
	for(int i=0;i<k;i++)
	{
		if(i) printf(" ");
		printf("%d",tmp[i].second);
	}
	printf("\n");
    return 0;
}