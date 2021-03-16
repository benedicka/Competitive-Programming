#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;
long long n,p;
double a[100010],b[100010],minn,mid,maxx,total;
bool cek()
{
	total = 0;
	for(int i=0;i<n;i++)
	{
		total+=a[i];
	}
	if(total<=p) return 1;
	return 0;
}
bool(ok())
{
	total = 0;
	for(int i=0;i<n;i++)
	{
		total+=max(0.0,a[i]*mid-b[i]);
	}
	total/=mid;
	if(total<=p) return 1;
	else return 0;
}
int main()
{
	scanf("%lld %lld",&n,&p);
	for(int i=0;i<n;i++)
	{
		scanf("%lf %lf",&a[i],&b[i]);
	
	}
	if(cek()) printf("-1\n");
	else
	{
		minn = 0;
		maxx = 10000000000;
		for(int i=0;i<10000;i++)
		{
			mid = (minn+maxx)/2;
			if(ok()) minn = mid;
			else maxx = mid;
		}	
		printf("%.10lf\n",mid);
	}

	return 0;	
}