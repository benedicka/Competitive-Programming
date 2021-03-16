#include<stdio.h>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{
	int n,m;
	double a,b,p,ans;
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++)
	{
		scanf("%lf %lf",&a,&b);
		p = a/b;
		if(i==0) ans = p;
		if(ans>p) ans = p;
	}
	printf("%.8lf\n",ans*m);
	return 0;
}