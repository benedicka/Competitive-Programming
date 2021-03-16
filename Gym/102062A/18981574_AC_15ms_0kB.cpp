#include<bits/stdc++.h>
using namespace std;
long long n,sum,x,t;
int main()
{
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		sum = 0;
		for(int i=0;i<4;i++)
		{
			scanf("%lld",&x);
			sum+=x;
		}
		printf("%s\n",sum*2>=n+1?"Yes":"No");
	}
	return 0;
}