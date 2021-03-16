#include<bits/stdc++.h>
using namespace std;
string s,t,lcs;
int dp[3010][3010];

int main()
{
	cin>>s>>t;
	for(int i=1;i<=t.size();i++)
	{
		for(int j=1;j<=s.size();j++)
		{
			dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
			if(t[i-1]==s[j-1])dp[i][j] = max(dp[i][j],dp[i-1][j-1]+1);
		//	printf("%d ",dp[i][j]);
		}
	//	printf("\n");
	}
	int a=t.size(),b=s.size();
	while(a!=0 && b!=0)
	{
		if(t[a-1]==s[b-1])
		{
			lcs+=s[b-1];
			a-=1;
			b-=1;
		}
		else if (dp[a-1][b] > dp[a][b-1]) a--; 
      	else b--;
	}
	reverse(lcs.begin(),lcs.end());
	cout<<lcs<<endl;
	return 0;
}