#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int dp[3010][3010];
string a,b;
int l1,l2;
int main()
{
	while(getline(cin,a))
	{
		getline(cin,b);
		l1 = a.size();
		l2 = b.size();
		for(int i=0;i<=l1;i++)
		{
			for(int j=0;j<=l2;j++)
			{
				if(i==0 || j==0) dp[i][j] = 0;
				else if(a[i-1]==b[j-1]) dp[i][j] = dp[i-1][j-1]+1;
				else dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
			}
		}
		cout<<dp[l1][l2]<<endl;
	}
	
	
	return 0;
}