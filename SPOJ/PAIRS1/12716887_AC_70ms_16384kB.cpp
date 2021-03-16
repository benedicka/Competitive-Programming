#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	long long n,a[100000],d,ans;
	scanf("%lld %lld",&n,&d);
	for (int i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
	}
	sort (a,a+n);
	ans = 0;
	for (int i=0;i<n;i++)
	{
		long long min = 0;
		long long max = n-1;
		long long key = a[i]+d;
		while (min<=max)
		{
			long long mid = (min+max)/2;
			if (a[mid]>key) max = mid-1;
			else if (a[mid]<key)min = mid +1;
			else
			{
				ans++;
				break;
			}
		}
	}
	printf("%lld\n",ans);
return 0;
}