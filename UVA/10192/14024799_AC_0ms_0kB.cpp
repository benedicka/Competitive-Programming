#include<string>
#include<algorithm>
#include<iostream>
using namespace std;
string x,y;
int tc,a,b,memo[110][110];
int lcs(int l1,int l2)
{
	for(int i=0;i<=l1;i++)
	{
		for(int j=0;j<=l2;j++)
		{
			if(i==0 || j==0) memo[i][j] = 0;
			else if(x[i-1]==y[j-1]) memo[i][j] = memo[i-1][j-1]+1;
			else memo[i][j] = max(memo[i][j-1],memo[i-1][j]);
		}
	}
	return memo[l1][l2];
}
int main()
{
	tc = 1;
	while(getline(cin,x))
	{
		if(x=="#") break;
		getline(cin,y);
		printf("Case #%d: you can visit at most %d cities.\n",tc++,lcs(x.size(),y.size()));
	}
	return 0;
}