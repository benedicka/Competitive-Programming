#include <stdio.h>
#include<math.h>
#include<string.h>
#include<algorithm>
using namespace std;


int main()
{
	long t,n,c,a[100002];
	scanf("%ld",&t);
	while(t--)
	{
		scanf("%ld %ld",&n,&c);
		for (int i=0;i<n;i++)
		{
			scanf("%ld",&a[i]);
		}
		sort (a,a+n);
		long min,mid,max,ans;
		min = 1;
		max = 1000000001;
		while (min<=max)
		{
			mid = (min+max)/2;
			long stall=a[0],cow=1;
			for (int i=1;i<n;i++)
			{
				if(a[i]-stall>=mid)
				{
					stall = a[i];
					cow++;
				}
			}
			if(cow<c)
			{
				max = mid-1;
			}
			else
			{
				ans = mid;
				min = mid+1;
			}
		}
		printf("%ld\n",ans);
		
		
	}
	
	
	
	
	return 0;
}