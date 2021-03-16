#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long idx=0,a[100010],sum=0,n,x;
	scanf("%lld",&n);
	while(n--)
	{
		scanf("%lld",&x);
		if(x%2)
		{
			a[idx++] = x;
		}
		else sum +=x; 
	}
	sort(a,a+idx);
	if(idx%2==0)
	{
		for(int i=idx-1;i>=0;i--)
		{
			sum+=a[i];
		}
	}
	else
	{
		for(int i=idx-1;i>0;i--)
		{
			sum+=a[i];
		}
	}
	printf("%lld\n",sum);
	return 0;
}