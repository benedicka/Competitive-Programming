#include<bits/stdc++.h>
using namespace std;
long long a1,a2,n,k1,k2,jum1,jum2,mn,mx,tmp;

int main()
{
	scanf("%lld %lld %lld %lld %lld",&a1,&a2,&k1,&k2,&n);
	jum1 = a1*(k1-1);
	jum2 = a2*(k2-1);
	if(jum1+jum2>=n) mn = 0;
	else
	{
		mn = min(a1+a2,n-jum1-jum2);
	}
	if(k2<k1)
	{
		swap(a1,a2);
		swap(k1,k2);
	}
	tmp = n;
	mx+=min(a1,n/k1);
	tmp-=mx*k1;
	mx+=min(a2,tmp/k2);
	printf("%lld %lld\n",mn,mx);
	return 0;
}