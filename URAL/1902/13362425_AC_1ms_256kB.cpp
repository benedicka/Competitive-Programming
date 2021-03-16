#include<stdio.h>
int main()
{
	int n;
	double t,s,a[110];
	scanf("%d %lf %lf",&n,&t,&s);
	double oposite = s+t;
	for(int i=0;i<n;i++)
	{
		
		scanf("%lf",&a[i]);
		
	}
	for(int i=0;i<n;i++)
	{
		printf("%.6lf\n",((oposite+a[i])/2));
	}
	
	
	
	return 0;
}