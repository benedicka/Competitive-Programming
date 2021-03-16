#include<bits/stdc++.h>
using namespace std;
long long a[500001],tmp[500001],n,q,ans,x,tc=1;;

void merge(int l,int m,int r)
{
	int i=l,j=m+1,idx=l;
	while(i<=m && j<=r)
	{
		if(a[i]>a[j])
		{
			tmp[idx] = a[j];
			j++;
			idx++;
			ans+=m - i+1;
		}
		else
		{
			tmp[idx] = a[i];
			i++;
			idx++;
		}
	}
	while(i<=m)
	{
		tmp[idx] = a[i];
		idx++;
		i++;
	}
	while(j<=r)
	{
		tmp[idx] = a[j];
		idx++;
		j++;
	}
	for(i=l;i<=r;i++)
	{
		a[i] = tmp[i];
	}
}
void srt(int l,int r)
{
	if(l==r) return;
	int m = (l+r)/2;
	srt(l,m);
	srt(m+1,r);
	merge(l,m,r);
}
int main()
{
	while(scanf("%lld %lld",&n,&q)!=EOF)
	{
		if(!n && !q) break;
		ans = 0;
		for(int i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
		}
		srt(0,(int)n-1);
		int l,m,r;
		printf("CASE# %lld:\n",tc++);
		while(q--)
		{
			ans = -1;
			scanf("%lld",&x);
			l = 0;
			r = n-1;
			while(l<=r)
			{
				m = (l+r)/2;
				if(a[m]==x)
				{
					if(ans==-1) ans = m;
					else ans = min(ans,(long long)m);
					r = m-1;
				}
				else if(a[m]<x) l = m+1;
				else r = m-1;
			}
			if(ans==-1) printf("%lld not found\n",x);
			else printf("%lld found at %lld\n",x,ans+1);
		}
		
	}
	return 0;
}