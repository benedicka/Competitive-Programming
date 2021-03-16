#include<bits/stdc++.h>
using namespace std;
int n,l,x,a[100010],b[100010],ans=0,tmp=0;
int main()
{
	scanf("%d %d %d",&n,&l,&x);
	for(int i=0;i<n;i++)
	{
		scanf("%d %d",&a[i],&b[i]);
	}
	tmp = 0;
	for(int i=0;i<n;i++)
	{
		ans+=(a[i]-tmp)/x;
		tmp=a[i]+b[i];
	}
	ans+=(l-tmp)/x;
	printf("%d", ans);
	return 0;
}