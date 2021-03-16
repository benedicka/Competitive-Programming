#include<stdio.h>

int main()
{
	long long n1,n2,x[10000000],y[10000000],ans;
	do
	{
		scanf("%lld %lld",&n1,&n2);
		if (n1==0 && n2 == 0) break;
		ans = 0;
		for (int i =0;i<n1;i++)
		{
			scanf("%lld",&x[i]);
		}
		for (int i =0;i<n2;i++)
		{
			scanf("%lld",&y[i]);
		}
		for (int i=0;i<n1;i++)
		{
			long long key = x[i];
			long long min = 0,max = n2-1;
			while (min<=max)
			{
				long long mid;
				mid = (min + max)/2;
				if (y[mid]>key) max = mid - 1;
				else if (y[mid]<key) min = mid +1;
				else if (y[mid]==key)
				{
					ans++;
					break;
				}
			}
		}
		printf("%lld\n",ans);
	}while (n1!=0 && n2!=0);
	
	
	
	
	
	
	return 0;
}