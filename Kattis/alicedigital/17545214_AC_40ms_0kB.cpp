#include<bits/stdc++.h>
using namespace std;
long long ans,tmp,t,n,m,x[100010];
int l,r,cntm;
int main()
{
	scanf("%lld",&t);
	while(t--)
	{
		ans = l = r = tmp = cntm = 0;
		scanf("%lld %lld",&n,&m);
		for(int i=0;i<n;i++)
		{
			scanf("%lld",&x[i]);
		}
		while(r<n)
		{	
			//printf("%d\n",cntm);
			if(x[r]>=m)
			{
				tmp+=x[r];
				if(x[r]==m) cntm++;
				while(cntm>1)
				{
					tmp-=x[l];
					if(x[l]==m) cntm--;
					l++;
				}
			}
			if(x[r]<m)
			{
				cntm = 0;
				tmp = 0;
				l = r+1;
			}
			if(cntm>0)ans = max(ans,tmp);
			r++;
		}
		if(cntm>0)ans = max(ans,tmp);
		printf("%lld\n",ans);
	}
	return 0;
}