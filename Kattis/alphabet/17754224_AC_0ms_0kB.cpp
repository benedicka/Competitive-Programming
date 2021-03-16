#include<bits/stdc++.h>
using namespace std;
char x[70];
int l,dp[70],mx=1;
int main()
{
	scanf("%s",&x);
	l = strlen(x);
	dp[0] = 1;
	for(int i=1;i<l;i++)
	{
		dp[i] = 1;
		for(int j=i-1;j>=0;j--)
		{
			if(x[i]>x[j])
			{
				dp[i] = max(dp[i],dp[j]+1);
				mx = max(mx,dp[i]);
			}
		}
	}
//	printf("%d\n",mx);
	printf("%d\n",26-mx);
	return 0;
}