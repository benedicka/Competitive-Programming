#include<bits/stdc++.h>
using namespace std;
long long x[1010][1010],n,a;

int main()
{
	scanf("%lld",&n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%lld",&x[i][j]);
		}
	}
	a = sqrt(x[0][1]*x[0][2]/x[1][2]);
	for(int i=0;i<n;i++)
	{
		if(i==0) printf("%lld",a);
		else
		{
			printf(" %lld",x[0][i]/a);
		}
	}
	printf("\n");
	return 0;
}