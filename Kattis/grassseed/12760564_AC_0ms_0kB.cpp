#include<stdio.h>
int main()
{
	double c,w,h,ans;
	int n;
	scanf("%lf",&c);
	ans = 0;
	scanf("%d",&n);
	while (n--)
	{
		scanf("%lf %lf",&h,&w);
		ans+=h*w*c;
	}
	printf("%.7f",ans);
	
	return 0;
}