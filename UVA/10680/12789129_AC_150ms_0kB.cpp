#include <stdio.h>
#include <math.h> 
bool num[1000001];
int N=1,n=1000000;
long primelist[79000];
void sieve()
{
	for(int i=0;i<n;i++)
	{
		num[i] = 1;
	}
	num[0] = 0;
	num[1] = 0;
	for(int i=3;i*i<n;i+=2)
	{
		if(num[i]==1)
		{
			for(int j=i+i;j<n;j+=i)
			{
				num[j] = 0;
			}
		}
	}
	primelist[0] = 2;
	for(int i=3;i<n;i+=2)
	{
		if(num[i]==1)
		{
			primelist[N]=i;
			N++;
		}
	}
}
long long lcm(long a)
{
	long long lcm =1;
	for(int i=0;i<N;i++)
	{
		if(primelist[i]>a) break;
		long long cek=primelist[i];
		while(cek*primelist[i]<=a)
		{
			cek*=primelist[i];
		}
		lcm*=cek;
		lcm %= 10000000000;
	}
	return lcm;
}
int main()
{
	sieve();
    long n;
    long long ans;
//    for(int i=0;i<N;i++)
//    {
//    	printf("%ld\n",primelist[i]);
//	}
//	printf("%d\n",N);
    while(scanf("%ld",&n)!=EOF)
    {
    	if(n==0) break;
    	ans = lcm(n);
    	while (ans/10>1 && ans%10==0) ans/=10;
    	printf("%lld\n",ans%10);
	}
    
    return 0;
}

