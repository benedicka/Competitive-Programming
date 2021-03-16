#include<stdio.h>
long long n,w,a[1010],cek,maxx,mid,minn,pref[1010],bsr,kcl;
int main()
{
	scanf("%lld %lld",&n,&w);
	
	for(int i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
		if(i==0) 
		{
			pref[i] = a[i];
			kcl = a[i];
			bsr = a[i];
		}
		else
		{
			pref[i] = pref[i-1]+a[i];
			if(bsr<pref[i]) bsr = pref[i];
			if(kcl>pref[i]) kcl = pref[i];
		}
	}
	minn = kcl<0?-1*kcl : 0;
	maxx = bsr>0?w-bsr : w;
	if(bsr>w) printf("0\n");
	else if(maxx<minn) printf("0\n");
	else printf("%lld\n",maxx-minn+1);
	
	return 0;
}