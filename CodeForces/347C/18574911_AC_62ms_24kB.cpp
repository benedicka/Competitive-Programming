#include<bits/stdc++.h>
using namespace std;
int n,a[110],cnt,g,mx;
int gcd(int a, int b)
{
	if(b==0) return a;
	gcd(b,a%b);
}
int main()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(i==0)
		{
			g = a[i];
			mx = a[i];
		}
		g = gcd(a[i],g);
		mx = max(a[i],mx);
	}

	printf("%s\n",((mx/g) - n)%2?"Alice":"Bob");
	return 0;
}