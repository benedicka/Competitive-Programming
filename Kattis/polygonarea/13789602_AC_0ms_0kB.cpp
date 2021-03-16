#include<stdio.h>
#include<math.h>

int main()
{
	double ans,x[1010],y[1010],jum;
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		if(n==0) break;
		jum = 0;
		for(int i =0;i<n;i++)
		{
			scanf("%lf %lf",&x[i],&y[i]);	
		}
		for(int i=0;i<n;i++)
		{
			if(i<n-1)jum+=(x[i]*y[i+1]);
			if(i>0)jum-=(x[i]*y[i-1]);
		}
		jum+=(x[n-1]*y[0]);
		jum-=(y[n-1]*x[0]);
		ans = (jum)/2;
	//	printf("%lf\n",ans);
	
		printf("%s %.1lf\n",ans<=0?"CW":"CCW",ans<0?ans*-1:ans*1);
	}
	return 0;
}