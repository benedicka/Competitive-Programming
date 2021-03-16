#include<stdio.h>
long long n,q;

int main()
{
	long long x[1000000],qu[1000000];
	scanf("%lld %lld",&n,&q);
	for (int i=0;i<n;i++)
	{
		scanf("%lld",&x[i]);
	}
	for (int i=0;i<q;i++)
	{
		scanf("%lld",&qu[i]);
	}
	long long key,low,high,mid,ans;
	low=0;
	high=n-1;
	for (int i=0;i<q;i++)
	{
		ans=-1;
		low=0;
		high=n-1;
		while (low<=high)
		{
		mid=(low+high)/2;
		key=x[mid];
		
		if (key==qu[i])
		{
			ans=mid;
			while (x[ans]==key)
			{
				ans--;
				if (x[ans]!=key)
				{
					ans+=1;
					break;
				}
			}
			break;
		}
		else if (key<qu[i]) 
		{
			low=mid+1;
		}
		else if (key>=qu[i])
		{
			high=mid-1;
		}
	
		}
		printf("%lld\n",ans);
	}

	
	
	
	
	
	
	return 0;
}