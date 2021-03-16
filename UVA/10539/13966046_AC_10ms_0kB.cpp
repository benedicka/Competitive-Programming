#include<stdio.h>
bool prime[2000010];
long long primelist[2000010],c,n;
long long l,h,ans;
long long cek;
void sieve()
{
	for(int i=0;i<=1000000;i++)
	{
		prime[i] = 1;
	}
	prime[0] = 0;
	prime[1] = 0;
	for(int i=2;i*i<=1000000;i++)
	{
		if(prime[i])
		{
			for(int j=i*i;j<=1000000;j+=i)
			{
				prime[j] = 0;
			}
		}
	}
	for(int i=2;i<1000000;i++)
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
	scanf("%lld",&n);
	while(n--)
	{
		scanf("%lld %lld",&l,&h);
		ans = 0;
		for(int i=0;i<c;i++)
		{
			cek = primelist[i]*primelist[i];
			if(cek>h) break;
			while(cek<=h)
			{
				if(cek>=l) 
				{
					ans+=1;
				}
				cek*=primelist[i];
			}
		}
		printf("%lld\n",ans);
	}
	return 0;
}