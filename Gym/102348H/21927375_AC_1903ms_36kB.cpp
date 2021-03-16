#include<bits/stdc++.h>
#pragma GCC optimize ("Ofast,unroll-loops,no-stack-protector")
#pragma GCC target("avx2,tune=native")
using namespace std;
long long  n;
long long x[3010];
long long ans;
long long binser(long long l,long long target,long long diff)
{
	if(l>=n) return 0;
//	prlong longf("%d %d %d\n",l,target,diff);
	long long r = n-1,m;
	while(l<=r)
	{
		m = (l+r)/2;
		
	//	prlong longf("%d %d\n",l,r);
		if(x[m]==target)
		{
			return 1+binser(m,target+diff,diff);
		}
		else if(x[m]>target)
		{
			r = m-1;
		}
		else l = m+1;
	}
	return 0;
}
int main()
{
	
	long long t = 0;
	scanf("%d",&n);
	
	for(long long i=0;i<n;i++)
	{
//		cin >> x[i];
		scanf("%lld",&x[i]);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			ans = max(ans,2+binser(j+1,2*x[j]-x[i],x[j]-x[i]));
		}
	}
	printf("%lld\n",ans);
	return 0;
}
