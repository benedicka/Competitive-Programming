#include<stdio.h>
#include<string>
#include<iostream>
using namespace std;
string x,y;
int ans[10010][10010];
int max(int a,int b)
{
	if(a>b) return a;
	return b;
}
int lcs(int l1,int l2)
{
	for(int i=0;i<=l1;i++)
	{
		for(int j=0;j<=l2;j++)
		{
			if (i == 0 || j == 0) ans[i][j] = 0;
  			else if (x[i-1] == y[j-1])ans[i][j] = ans[i-1][j-1]+1;
			else ans[i][j] = max(ans[i-1][j], ans[i][j-1]);
		}
	}
	return ans[l1][l2];
}
int main()
{
	int a,b;
	while(getline(cin,x))
	{
		getline(cin,y);
		a = x.size();
		b = y.size();
		printf("%d\n",lcs(a,b));
	}
	return 0;
}