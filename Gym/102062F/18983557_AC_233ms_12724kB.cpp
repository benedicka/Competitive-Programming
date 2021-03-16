#include<bits/stdc++.h>
using namespace std;
const int mx=1000000;
int primelist[1000010],sz,p[1000010],q[1000010],cnt,idx;
bool prime[1000010];
void pre()
{
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
	primelist[sz++] = 2;
	for(int i=3;i<=mx;i++)
	{
		if(!prime[i]) primelist[sz++] = i;
	}
	for(int i=0;i<sz;i++)
	{
		if(primelist[i]*primelist[i]>mx) break;
		for(int j=i;j<sz;j++)
		{
			if(primelist[i]*primelist[j]>mx) break;
			prime[primelist[i]*primelist[j]] = 0;
		}
	}
	for(int i=1;i<=1000000;i++)
	{
		if(!prime[i])
		{
			cnt++;
		}
		p[i] = cnt/__gcd(i,cnt);
		q[i] = i/__gcd(i,cnt);
	}
}
int main()
{
	pre();
	int t,x;
	scanf("%d",&t);
	for(int tc=1;tc<=t;tc++)
	{
		scanf("%d",&x);
		printf("Case %d: %d/%d\n",tc,p[x],q[x]);
	}
	return 0;
}