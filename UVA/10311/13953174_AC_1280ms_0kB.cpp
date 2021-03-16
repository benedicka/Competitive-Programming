#include<stdio.h>
long long jum=0,n=100000000,x,ans1,ans2,y,input,c=0,idx=0;
long long primelist[6000000];
bool prime[100000010];
void sieve()
{
	for(int i=0;i<=n;i++)
	{
		prime[i] = 1;
	}
	prime[0] = 0;
	prime[1] = 0;
	for(int i=2;i*i<=n;i++)
	{
		if(prime[i])
		{
			for(int j=i*i;j<=n;j+=i)
			{
				prime[j] = 0;
			}
		}
	}
	
	for(int i=0;i<=n;i++)
	{
		if(prime[i])
		{
			primelist[c] = i;
			c++;
		}
	}
}
int main()
{
	sieve();
	while(scanf("%lld",&input)!=EOF)
	{
		x = input/2;
		idx=0;
		ans1 = -1;
		ans2 = -1;
		if(input<=4) printf("%lld is not the sum of two primes!\n",input);
		else if(input%2!=0)
		{
			if(prime[input-2]) printf("%lld is the sum of %lld and %lld.\n",input,2,input-2);
			else printf("%lld is not the sum of two primes!\n",input);
		}
		else
		{
			x-=1;
			if(x%2==0) x-=1;
			for(x ; x>0;x-=2)
			{
				if(prime[x] && prime[input-x])
				{
					ans1 = x;
					ans2 = input-x;
					break;
				}
			}
			if(ans1!=-1 && ans2!=-1) printf("%lld is the sum of %lld and %lld.\n",input,ans1,ans2);
			else printf("%lld is not the sum of two primes!\n",input);
		}
		
		
	}
	return 0;
}