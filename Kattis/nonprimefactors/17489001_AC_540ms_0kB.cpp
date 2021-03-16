#include<bits/stdc++.h>
using namespace std;
bool prime[1510] = {1};
int primelist[1510],cnt=0,dp[2000010];
void sieve()
{
	memset(prime,1,sizeof(prime));
	prime[0] = prime[1] = 0;
	for(int i=2;i*i<=1500;i++)
	{
		if(prime[i])
		{
			for(int j=i*i;j<=1500;j+=i)
			{
				//printf("%d\n",j);
				prime[j] = 0;
			}	
		}
		//printf("%d %d\n",i,prime[i]);	
	}
	for(int i=2;i<=1500;i++)
	{
		if(prime[i])
		{
			
			primelist[cnt++] = i;
		} 
	}
}
int main()
{

	sieve();
	int ans,p,z,q,x,a;
	scanf("%d",&q);
	while(q--)
	{
		ans = 1;
		p = 0;
		scanf("%d",&x);
		a = x;
		if(dp[x]!=0)
		{
			printf("%d\n",dp[x]);
			continue;
		}
		for(int i=0;i<cnt;i++)
		{
			if(primelist[i]>=x) break;
			if(x%primelist[i]==0)
			{
				p+=1;
				z = 1;
				//printf("x = %d, %d\n",x,primelist[i]);
				while(x%primelist[i]==0)
				{
					x/=primelist[i];
					z++;
				}
				ans*=z;
			}
		}
		if(x!=1)
		{
			ans*=2;
			p+=1;
		}
		//printf("cek : %d %d\n",ans,p);
		dp[a] = ans-p;
		printf("%d\n",ans-p);
	}
	return 0;
}