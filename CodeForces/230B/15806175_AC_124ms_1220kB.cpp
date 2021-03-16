#include<bits/stdc++.h>
using namespace std;
long long n,x,tmp;
bool prime[1000010];
void pre()
{
	for(int i=2;i<=1000000;i++)
	{
		prime[i] = 1;
	}
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
}
int main()
{ 
	pre();
	scanf("%lld",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%lld",&x);
		tmp = sqrt(x);
		if(tmp*tmp!=x || !prime[tmp]) printf("NO\n");
		else printf("YES\n"); 
	}
	return 0;
}