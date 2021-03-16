#include<bits/stdc++.h>
using namespace std;
int t,cnt;
double p,n,k,ans,p1,x,sebelum,tmp,y;
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lf %lf %lf",&n,&p,&k);
		p1 = 1-p;
		cnt = 0;
		x = pow(p1,(int)n);
		y = pow(p1,(int)k-1);
		
		tmp = 1;
		ans = 0;
		do
		{
			sebelum = ans;
			ans+= p*tmp*y;
			tmp*=x;
			cnt++;
		}while(ans-sebelum>=0.000000001);
		printf("%.4lf\n",ans);
	}
	return 0;
}