#include<stdio.h>
#include<math.h>
int main()
{
	long long b,n,c=1;
	double ans;
	int t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld %lld",&b,&n);
		ans = log (n)/log(b);
		if(ans>0)printf("Case %d: %.5lf\n",c,ans);
		else printf( "Case %d: Math Error!\n",c);
		c++;
	}

	
	
	
	return 0;
}