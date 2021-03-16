#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	long a,b;
	int t;
	double ans;
	scanf("%d",&t);
	char x[1000];
	while(t--)
	{
		ans=0;
		scanf("%ld",&a);
		for (int i=1;i<=a;i++)
		{
			ans+=log10(i);
			b=(int)ans;
		}
		printf("%ld\n",b+1);
	}
	return 0;
}