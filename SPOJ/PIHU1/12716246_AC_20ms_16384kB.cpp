#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	long long t,n,a[1000],p,ans;
	scanf("%lld",&t);
	while (t--)
	{
		ans = 0;
		scanf("%lld",&n);
		for(int i = 0;i<n;i++)
		{
			scanf("%lld",&a[i]);
		}
		scanf("%lld",&p);
		sort (a,a+n);
		for (int i = 0;i<n;i++)
		{
			for (int j = i+1;j<n;j++)
			{
				long long key = p-a[i]-a[j];
				long long min = 0,max = n-1;
				while (min<=max)
				{
					long long mid;
					mid = (max+min)/2;
					if (mid == i || mid == j) break;
					if (a[mid]>key) max = mid - 1;
					else if (a[mid]<key) min = mid +1;
					else
					{
						if (i!=mid && j!=mid)ans = 1;
						break;
					}
				}
				if (ans==1) break;
			}
			if (ans==1) break;
		}
		if (ans == 1) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}