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
	printf("%lld %lld\n",n*(n+1)/2-mx,mx);
	return 0;
}