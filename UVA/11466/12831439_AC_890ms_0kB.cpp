#include<stdio.h>
#include<algorithm>
#include<math.h>
using namespace std;
bool num[10000000];
long long n=10000000,N=1;
long long primelist[10000000];
void prime()
{
	for(long long i=0;i<n;i++)
	{
		num[i] = 1;
	}
	num[0] = 0;
	num[1] = 0;
	for(long long i=3;i<n;i+=2)
	{
		if(num[i]==1)
		{
			for(long long j=i*i;j<n;j+=i)
			{
				num[j] = 0;
			}
		}
	}
	primelist[0] = 2;
	for(long long i=3;i<n;i+=2)
	{
		if(num[i]==1)
		{
			primelist[N]=i;
			N++;
		}
	}
}
int main()
{
	prime();
	long long a,ans,b;
	long long c=0;
	N = N-1;
	while(scanf("%lld",&a)!=EOF)
	{
		if(a==0) break;
		if(a<1) a=0-a;
		ans = 0;
		c = 0;
	  	b = a;
		for(long long i=0;i<N;i++)
		{
			if(a%primelist[i]==0)
			{
				c++;
			
					while (a%primelist[i]==0)
					{
						a/=primelist[i];
					}
				
				ans = primelist[i];
			}
		}
		if(a==1 && c>1) printf("%lld\n",ans);
		else if(a!=1 && a!=b) printf("%lld\n",a);
		else printf("-1\n");
	
	}
	return 0;
}