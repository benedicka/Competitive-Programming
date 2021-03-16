#include<bits/stdc++.h>
using namespace std;
long long t,n,a[100010],idx[1000010],sum;
int main()
{
	scanf("%lld",&t);
	while(t--)
	{
		memset(idx,-1,sizeof(idx));
		scanf("%lld",&n);
		for(int i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
		}
		sum = 0;
		sort(a,a+n);
		for(int i=0;i<n;i++)
		{
			if(idx[a[i]]==-1)
			{
				for(int j=a[i];j<=a[n-1];j+=a[i])
				{
					if(idx[j]==-1)idx[j] = i;
				}
			}
			sum+=a[idx[a[i]]];
		}
		printf("%lld\n",sum);
	}
	return 0;
}