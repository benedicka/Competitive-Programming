#include<stdio.h>
int memo[510][510],n;
int gcd(int a, int b)
{
	if(b==0) return a;
	gcd(b,a%b);
}
int main()
{
	int ans,n;
	while(scanf("%d",&n)!=EOF)
	{
		ans = 0;
		if(n==0) break;
		for(int i=1;i<n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				if(memo[i][j]==0)	memo[i][j] = gcd(i,j);	
				ans+=(memo[i][j]);
				//printf("gcd(%d ,%d) = %d\n",i,j,memo[i][j]);
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}