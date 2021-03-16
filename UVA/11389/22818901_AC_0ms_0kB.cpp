#include<bits/stdc++.h>
using namespace std;
int a[110],b[110],tmp[110];
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
void merge2(int l,int m,int r)
{
	int i=l,j=m+1,idx=l;
	while(i<=m && j<=r)
	{
		if(b[i]<b[j])
		{
			tmp[idx] = b[j];
			j++;
			idx++;
		}
		else
		{
			tmp[idx] = b[i];
			i++;
			idx++;
		}
	}
	while(i<=m)
	{
		tmp[idx] = b[i];
		idx++;
		i++;
	}
	while(j<=r)
	{
		tmp[idx] = b[j];
		idx++;
		j++;
	}
	for(i=l;i<=r;i++)
	{
		b[i] = tmp[i];
	}
}
void srt(int l,int r)
{
	if(l==r) return;
	int m = (l+r)/2;
	srt(l,m);
	srt(m+1,r);
	merge(l,m,r);
	merge2(l,m,r);
}

int main()
{
	int t,n,ans,d,r;
	while(scanf("%d %d %d",&n,&d,&r)!=EOF)
	{
		if(!n && !d && !r) break;
		for(int i=0;i<n;i++) scanf("%d",&a[i]);
		for(int i=0;i<n;i++) scanf("%d",&b[i]);
		srt(0,n-1);
		ans = 0;
		for(int i=0;i<n;i++)
		{
			if(a[i]+b[i]>d) ans+=(a[i]+b[i]-d)*r;
		}
		printf("%d\n",ans);
	}
	return 0;
}