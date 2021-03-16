#include<bits/stdc++.h>
using namespace std;
long long dp[30][150],posible[30],a,b,sum;
void pre()
{
	posible[0] = 1;
	for(int i=1;i<=24;i++)
	{
		posible[i] = 6*posible[i-1];
	}
	dp[1][1] = 1;
	dp[1][2] = 1;
	dp[1][3] = 1;
	dp[1][4] = 1;
	dp[1][5] = 1;
	dp[1][6] = 1;
	for(int i=2;i<=24;i++)
	{
		for(int j=i;j<=6*i;j++)
		{
			for(int k=1;k<=6;k++)
			{
				if(j-k<=0) break;
				dp[i][j]+=dp[i-1][j-k];
			}
		}
	}
}
int main()
{
	pre();
	a = 6;
	for(int i=1;i<=24;i++)
	{
		sum = 0;
		for(int j=1;j<=6*i;j++)
		{
			//printf("%-4lld ",dp[i][j]);
			sum+=dp[i][j];
		}
		a*=6;
	}
	while(scanf("%lld %lld",&a,&b)!=EOF)
	{
		if(a==0 && b==0) break;
		if(b==a || b<a)
		{
			printf("1\n");
			continue;
		}
		if(b>6*a)
		{
			printf("0\n");
			continue;
		}
		sum = 0;
		for(int i=b;i<=6*a;i++)
		{
			sum+=dp[a][i];
		}
		a = posible[a];
		//printf("cek = %lld %lld\n",sum,a);
		printf("%lld/%lld\n",sum/__gcd(a,sum),a/__gcd(a,sum));
	}
	return 0;
}