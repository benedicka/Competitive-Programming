#include<bits/stdc++.h>
using namespace std;
long long x,y,t;
int main()
{
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld %lld",&x,&y);
		if(x*y%2==0) printf("Hasan\n");
		else printf("Hussain\n");
	}
	
	return 0;
}