#include<bits/stdc++.h>
using namespace std;
long long x[1000010],n;
int main()
{
	x[0] = 1;
	for(int i=1;i<=1000000;i++)
	{
		x[i] = (x[(int)(i-(double)sqrt(i))] + x[(int)log(i)])%1000000 + x[(int)(i*sin(i)*sin(i))]; 
		x[i]%=1000000;
	}
	while(scanf("%lld",&n)!=EOF)
	{
		if(n==-1) break;
		printf("%lld\n",x[n]);
	}
	return 0;
}