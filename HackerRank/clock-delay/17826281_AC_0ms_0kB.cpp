#include<bits/stdc++.h>
using namespace std;
int t,h1,h2,m1,m2,k,ans;
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d %d %d %d",&h1,&m1,&h2,&m2,&k);
		ans = (h1*60+m1+k*60) - (h2*60+m2);
		printf("%d\n",ans);
	}
	return 0;
}