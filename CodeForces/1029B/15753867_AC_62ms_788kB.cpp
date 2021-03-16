#include<bits/stdc++.h>
using namespace std;
int n,a[200010],ans,r,l;
int main()
{
	ans = 1;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	l = 0;
	while(l<n)
	{
		r=l;
		while (r+1<n && a[r+1]<=a[r]*2) 
		{
			r++;
		}
		ans = max(ans,r-l+1);
		l=r+1;
	}
	printf("%d\n", ans);
	return 0;
}