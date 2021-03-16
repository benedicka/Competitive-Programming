#include<algorithm>
#include<stdio.h>
#include<iostream>
using namespace std;
long long n,s,a[200010],ans;
int l,r;
int main()
{
	scanf("%lld %lld",&n,&s);
	for(int i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
	}
	sort(a,a+n);
	ans = 0;
	l = 0;
	r = n-1;
	while(l<=r)
	{
		if(a[l]>s) ans+=abs(s-a[l]);
		if(a[r]<s) ans+=abs(a[r]-s);
		l++;
		r--;
	}
	printf("%lld\n",ans);
	return 0;
}