#include<stdio.h>
#include<algorithm>
#include<utility>
using namespace std;
struct data
{
	int idx;
	int v;
	bool use; 
}a[2010];
bool cmp1(data a, data b)
{
	if(a.v==b.v)
	{
		return(a.idx>b.idx);
	}
	return(a.v<b.v);
}
bool cmp2(data a, data b)
{
	return(a.idx<=b.idx);
}
int main()
{
	int n,k,ans=0,work,cnt = 0,y;
	bool ok = 0;
	
	scanf("%d %d",&n,&k);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i].v);
		a[i].use = 0;
		a[i].idx = i;
	}
	sort(a,a+n,cmp1);
	for(int i=0;i<k;i++)
	{
		ans+=(a[n-1-i].v);
		a[n-1-i].use = 1;
	}
	sort(a,a+n,cmp2);
	a[n].v = -10;
	printf("%d\n",ans);
	for(int i=0;i<=n;i++)
	{
		if(i!=n)cnt++;
		if(a[i].use && k!=1 || a[i].v==-10)
		{
			if(!ok)
			{
				ok = 1;
				printf("%d",cnt);
			}
			else printf(" %d",cnt);
			cnt = 0;
			k--;
		}
	}
	printf("\n");
	return 0;
}