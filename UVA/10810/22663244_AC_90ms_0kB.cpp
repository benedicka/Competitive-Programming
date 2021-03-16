#include<bits/stdc++.h>
using namespace std;
long long a[500001],tmp[500001],n,ans;

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
//	for(int i=0;i<t;i++)
//	{
//		printf("%d ",a[i]);
//	}
//	printf("\n");
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
	while(scanf("%lld",&n)!=EOF)
	{
		if(!n) break;
		ans = 0;
		for(int i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
		}
		srt(0,(int)n-1);
		printf("%lld\n",ans);
	}
	return 0;
}