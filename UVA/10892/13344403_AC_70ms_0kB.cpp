#include<stdio.h>
#include<algorithm>
using namespace std;
long long n,f[10000000],ans = 0,jum;
long long gcd(long long a,long long b)
{
	if(b==0) return a;
	else return gcd(b,a%b);
}

int main()
{
	while(scanf("%lld",&n)!=EOF)
	{
		if(n==0) break;
		jum = 0;
		ans = 0;
		for(int i=1;i*i<=n;i++)
		{
			if(n%i==0)
			{
				f[jum] = i;
				jum+=1;
				if(n/i!=f[jum-1])
				{
					f[jum] = n/i;
					jum+=1;
				}
				
			}
		}
		sort(f,f+jum);

		for(int i=0;i<jum;i++)
		{
			for(int j=i;j<jum;j++)
			{
				if((f[i]*f[j])/gcd(f[i],f[j]) == n) 
				{
					ans++;
					//printf("%d %d %lld\n",f[i],f[j],ans);
				}
			}
		}
		printf("%lld %lld\n",n,ans);
	}
	return 0;
}