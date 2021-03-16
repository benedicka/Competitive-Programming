#include<bits/stdc++.h>
using namespace std;
int n,jum;
bool prime[3000010];
int primelist[900010];
void sieve()
{
	int mx = 3000000;
	for(int i=2;i*i<=mx;i++)
	{
		if(!prime[i])
		{
			for(int j=i*i;j<=mx;j+=i)
			{
				prime[j] = 1;
			}
		}
	}
	for(int i=2;i<=mx;i++)
	{
		if(!prime[i]) primelist[jum++] = i;
	}
}
int main()
{
	sieve();
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		if(i) printf(" ");
		printf("%d",primelist[i]);
	}
	printf("\n");
	return 0;
}