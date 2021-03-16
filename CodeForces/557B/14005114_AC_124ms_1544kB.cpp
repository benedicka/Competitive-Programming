#include<stdio.h>
#include<algorithm>
using namespace std;
int n;
double w,maxx=0,minn=1000000010,mid,a[200010];
bool ok()
{
	double boy,girl;
	boy = (2*mid)/(3*n);
	girl = mid/(3*n);
	//printf("%lf %lf\n",boy,girl);
	if(girl>a[0] || boy>a[n]) return 0;
	return 1;
}
int main()
{
	scanf("%d %lf",&n,&w);
	for(int i=0;i<2*n;i++)
	{
		scanf("%lf",&a[i]);
		if(minn>a[i]) minn = a[i];
		maxx += a[i];
	}
	sort(a,a+(2*n));
	if(maxx>w) maxx = w;
	for(int i=0;i<100;i++)
	{
		//printf("min = %lf max = %lf\n",minn,maxx);
		mid = (minn+maxx)/2;
		if(ok()) minn = mid;
		else maxx = mid;
	}
	printf("%.6lf\n",mid);
	return 0;
}