#include<bits/stdc++.h>
using namespace std;
long long t,x[200010],n,y,a,sum,l,r,lnow;
 
int main()
{
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		y = 0;
		for(int i=0;i<n;i++)
		{
			scanf("%lld",&x[i]);
			y+=x[i];
		}
		a = x[0];
		lnow  = l = r = sum = 0;
		for(int i=0;i<n;i++)
		{
			sum+=x[i];
			if(sum>a)
			{
				a = sum;
				l = lnow;
				r = i;
			}
			if(sum<=0)
			{
				lnow = i;
				sum = 0;
			}
			
		}
	//	printf("%lld %lld %lld-%lld\n",y,a,l,r);
		if(y==a)
		{
			if(l==0 && r==n-1 && x[l]>0 && x[r]>0) printf("YES\n");
			else printf("NO\n");
		}
		else printf("%s\n",y>a?"YES":"NO");
	}
	return 0;
}