#include<bits/stdc++.h>
using namespace std;
long long d,r,t,ans,tot,theo,rita,br,bt;
int main()
{
	scanf("%lld %lld %lld",&d,&r,&t);
	tot = r+t;
	rita = 3+d;
	for(int i=4;i<rita;i++)
	{
		br+=(i);
	}
//	printf("%lld\n",rita);
	theo = 3;
//	printf("%lld %lld\n",br,bt);
	for(int i=0;i<=2000;i++)
	{
		br+=(rita+i);
		bt+=(theo+i);
		//printf("%lld %lld\n",br,bt);
		if(br+bt==tot && br<=r) break;
	}
	printf("%lld\n",r-br);
	return 0;
}