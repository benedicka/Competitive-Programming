#include<bits/stdc++.h>
using namespace std;
const double pi = acos(-1.0);
int t;
double ac,ans,ad,ae,area_afd,area_acd,area_ahf;
int main()
{
	scanf("%d",&t);
	for(int tc=1;tc<=t;tc++)
	{
		scanf("%lf",&ac);
		ad = ac*sqrt(2);
		ae = ad/2;
		area_afd = pi*ae*ae;
		area_acd = ac*ac/2;
		area_ahf = (area_afd-area_acd)/2;
		ans = pi*ac*ac/4 - area_ahf;
		printf("Case %d: %.4lf\n",tc,ans);
	}
	return 0;
}