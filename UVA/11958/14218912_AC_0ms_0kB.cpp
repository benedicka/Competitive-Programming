#include<stdio.h>
#include<stdlib.h>
int t,n,hs,ms,tt,h,m,ans,mt1,mt2;
int main()
{
	scanf("%d",&t);
	for(int tc=1;tc<=t;tc++)
	{
		ans = 10000000;
		scanf("%d %d:%d",&n,&hs,&ms);
		mt1 = hs*60+ms;
		for(int i=0;i<n;i++)
		{
			scanf("%d:%d %d",&h,&m,&tt);
			mt2 = h*60+m;
			if(mt2<mt1) mt2+=(24*60);
			if(mt2-mt1+tt<ans) ans = mt2-mt1+tt;
		}
		printf("Case %d: %d\n",tc,ans);
	}
	return 0;
}