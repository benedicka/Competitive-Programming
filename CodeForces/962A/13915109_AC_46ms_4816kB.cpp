#include<stdio.h>

int main()
{
	long long n,mid,a[200000],total;
	total = 0;
	scanf("%lld",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
		total+=a[i];
		a[i] = total;
	}
	if(total%2==0)total/=2;
	else total = total/2+1;
	for(int i=0;i<n;i++)
	{
		if(a[i]>=total)
		{
			printf("%d\n",i+1);
			break;
		}
	}
	return 0;
}