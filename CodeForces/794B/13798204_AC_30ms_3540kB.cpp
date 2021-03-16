#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	double h,ans,a;
	scanf("%d %lf",&n,&h);
	for(int i=1;i<n;i++)
	{
		a = (double)i/n;
		ans = (sqrt(a)*h);
		printf("%.6lf",ans);
		if(i<n-1) printf(" ");
		else printf("\n");
	}
	
	return 0;
}