#include<bits/stdc++.h>
using namespace std;
int n,m,a[110],b[110];

int main()
{
	scanf("%d %d",&n,&m);
	for(int i=0;i<n+1;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<m+1;i++)
	{
		scanf("%d",&b[i]);
	}
	if(m>n) printf("0/1");
	else if(n>m)
	{
		if((a[0]<0 || b[0]<0) &&!(a[0]<0 && b[0]<0)) printf("-");
		printf("Infinity\n");
	}
	else
	{
		if((a[0]<0 || b[0]<0)&&!(a[0]<0 && b[0]<0)) printf("-");
		a[0] = abs(a[0]);
		b[0] = abs(b[0]);
		printf("%d/%d\n",a[0]/__gcd(a[0],b[0]),b[0]/__gcd(a[0],b[0]));
	}
	return 0;
}