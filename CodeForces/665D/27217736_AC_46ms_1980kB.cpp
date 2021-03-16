#include <bits/stdc++.h>
using namespace std;
int n,x[1010],cnt,a;
bool prime[2000010],done;
void sieve()
{
	int mx=2e6;
	memset(prime,1,sizeof(prime));
	prime[0] = prime[1] = 0;
	for(int i=2;i*i<=mx;i++)
	{
		for(int j=i*i;j<=mx;j+=i)
		{
			prime[j] = 0;
		}
	}
}

int main()
{
	sieve();
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
		if(prime[x[i]])
		{
			a = x[i];
		}
	}
	sort(x,x+n);
	for(int i=0;i<n;i++)
	{
		if(x[i]!=1) break;
		cnt++;
	}
	if(cnt>=2)
	{
		int tmp=0;
		for(int i=cnt;i<n;i++)
		{
			if(x[i]!=1 && prime[x[i]+1])
			{
				tmp = x[i];
				break;
			}
		}
		printf("%d\n",tmp?cnt+1:cnt);
		for(int i=0;i<cnt;i++)
		{
			if(i) printf(" ");
			printf("1");
		}
		if(tmp!=0) printf(" %d",tmp);
		printf("\n");
	}
	else
	{
		for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(prime[x[i]+x[j]])
				{
					printf("2\n%d %d\n",x[i],x[j]);
					done = 1;
					break;
				}
			}
			if(done) break; 
		}
		if(!done && a!=0)
		{
			printf("1\n%d\n",a);
		}
		else if(!done)printf("1\n%d\n",x[0]);
	}
	
	return 0;
}