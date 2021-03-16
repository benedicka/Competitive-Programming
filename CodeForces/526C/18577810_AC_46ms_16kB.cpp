#include<bits/stdc++.h>
using namespace std;
long long c,hr,hb,wr,wb,l,m,r,ans,a,b,tmp,bts;


int main()
{
	scanf("%lld %lld %lld %lld %lld",&c,&hr,&hb,&wr,&wb);
	ans = max((c/wr)* hr , (c/wb) *hb);
	for(long long i=1;i*i<=c;i++)
	{
		a = i;
		b = (c-a*wr)/wb;
		if(a>=0 && b>=0 && a*wr+b*wb<=c) ans = max(ans,a*hr +   b* hb);
		a = c/i;
		b = (c-a*wr)/wb;
		if(a>=0 && b>=0 && a*wr+b*wb<=c) ans = max(ans,a*hr +   b* hb);
	}
	swap(hr,hb);
	swap(wr,wb);	
	for(long long i=1;i*i<=c;i++)
	{
		a = i;
		b = (c-a*wr)/wb;
		if(a>=0 && b>=0 && a*wr+b*wb<=c) ans = max(ans,a*hr +   b* hb);
		a = bts/i;
		b = (c-a*wr)/wb;
		if(a>=0 && b>=0 && a*wr+b*wb<=c) ans = max(ans,a*hr +   b* hb);
	}
	printf("%lld\n",ans);
	return 0;
}