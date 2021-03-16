#include<stdio.h>
#include<string.h>
#include<string>
#include<iostream>
using namespace std;
int l,dp[1010][1010],t;
string x;
int max(int a , int b)
{
	if(a>b) return a;
	else return b;
}
int lps(int i , int j)
{
	if(j<i) return 0;
	if(i==j) return 1;
	if(dp[i][j]!=-1) return dp[i][j];
	if(x[i]==x[j]) return dp[i][j] = 2+lps(i+1 , j-1);
	else return dp[i][j] = max(lps(i,j-1),lps(i+1,j));
}
int main()
{
	scanf("%d",&t);getchar();
	while(t--)
	{
		getline(cin,x);
		l = x.size();
		for(int i=0;i<=l;i++)
		{
			for(int j=0;j<=l;j++)
			{
				dp[i][j] = -1;
			}
		}
		printf("%d\n",lps(0,l-1));
	}	
	return 0;
}