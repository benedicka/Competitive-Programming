#include<bits/stdc++.h>
using namespace std;
long long t,n,mx,a[100010],sum,z;
bool ada[1000010];
int main()
{
	scanf("%lld",&t);
	while(t--)
	{
		
		scanf("%lld",&n);
		sum = mx = 0;
		for(int i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
			ada[a[i]] = 1;
		}
		for(int i=0;i<n;i++)
		{
			z = a[i];
			for(int j=1;j*j<=a[i];j++)
			{
				if(a[i]%j==0 && ada[j])
				{
					z = min(z,(long long)j);
					break;
				}
				if(a[i]%j==0 && ada[a[i]/j])z = min(z,(long long)a[i]/j);
			}
			sum+=z;
		}
		printf("%lld\n",sum);
for(int i=0;i<n;i++)
{
   ada[a[i]] = 0;
}
	}
	return 0;
}