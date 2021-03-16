#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
	long t,n,ans,a[10000],c=1;
	scanf("%ld",&t);
	while (t--)
	{
		scanf("%ld",&n);
		for (int i=0;i<n;i++)
		{
			scanf("%ld",&a[i]);
		}
		sort (a,a+n);
		for (int i=0;i<n;i+=2)
		{
			if (a[i+1]!=a[i])
			{
				ans = a[i];
				break;
			}
		}
		printf("Case #%ld: %ld\n",c,ans);
		c++;
	}
	
	return 0;
}