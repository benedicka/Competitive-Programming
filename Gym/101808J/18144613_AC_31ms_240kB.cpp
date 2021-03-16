#include<bits/stdc++.h>
using namespace std;
int t,ans,l1,r1,p1,d1,l2,r2,p2,d2,k;
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		ans = 0;
		scanf("%d %d %d %d",&l1,&r1,&p1,&d1);
		scanf("%d %d %d %d",&l2,&r2,&p2,&d2);
		scanf("%d",&k);
		if(p1==l1) d1 = 1;
		else if(p1==r1)  d1 = 0;
		if(p2==l2) d2 = 1;
		else if(p2==r2) d2 = 0;
		for(int i=0;i<k;i++)
		{
			p1+=(d1==1?1:-1);
			p2+=(d2==1?1:-1);
			if(p1==p2) ans++;
			if(p1==l1 || p1==r1) d1 ^= 1;
			if(p2==l2 || p2==r2) d2 ^= 1;
		}
		printf("%d\n",ans);
	}
	return 0;
}