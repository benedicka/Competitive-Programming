#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long x,y,t;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld %lld",&x,&y);
		if(x%2==0 || y%2==0) printf("Hasan\n");
		else printf("Hussain\n");
	}
	
	return 0;
}