#include<stdio.h>
	bool prime[86028122];
	long long onlyprime[5000001];

		long long m=1;
void listprime ()
{
	
	long long N=86028122;
	for (long long i=0;i<N;i++)
	{
		prime [i]=1;
	}
	prime[0]=0;
	prime[1]=0;
	for (long long i=3;i*i<=N;i+=2)
	{
		if (prime[i])
		{
			for (long long j=i*i;j<=N;j+=i)
			{
				prime[j]=0;
			}
		}
	}
	onlyprime[0]=2;
	for (long long i=3;i<=N;i+=2)
	{
		if (prime[i]==1)
		{
			onlyprime[m]=i;
			if (m==5000000) break;
			m++;
		}
	}
	
	
	
	
}

int main()
{
	long long t,a;
	listprime();
	

	scanf("%lld",&t);
	for (long long i=0;i<t;i++)
	{
		scanf("%lld",&a);
		printf("%lld\n",onlyprime[a-1]);
	}
	return 0;
}	
	
	