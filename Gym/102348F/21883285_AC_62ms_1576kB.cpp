#include<bits/stdc++.h>
using namespace std;
long long n,a[200010],mx,ze,cnt=1,cnt_negatif,cnt_0,prv,cnt1,cnt2;

int main()
{
	scanf("%lld",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
		if(a[i]>0) a[i] = 1;
		else if(a[i]<0) a[i] = -1;
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]==0)
		{
			cnt1 = cnt2 = cnt_negatif = 0;
			cnt_0++;
			prv = (i+1);
			ze+=(i+1);
		}
		if(a[i]!=0)
		{
			if(cnt_negatif%2)
			{
				cnt1++;
			}
			else cnt2++;
			if(a[i]<0)
			{
				cnt_negatif++;
			}
			if(cnt_negatif%2) mx+=cnt1;
			else mx+=cnt2;
		}
		
		
		
		if(cnt_0>0 && a[i]!=0) ze+=(prv);
		//printf("%d %lld %lld\n",i,cnt_0,ze);
	//	printf("%d %lld %lld\n",i,cnt_negatif,mx);
	}
	printf("%lld %lld %lld\n",n*(n+1)/2-mx-ze,ze,mx);
	return 0;
}