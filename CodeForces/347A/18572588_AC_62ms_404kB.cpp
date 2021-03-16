#include<bits/stdc++.h>
using namespace std;
int n,a[100010];
int main()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	sort(a,a+n);
	swap(a[0],a[n-1]);
	for(int i=0;i<n;i++)
	{
		if(i!=0) printf(" ");
		printf("%d",a[i]);
	}
	printf("\n");
	return 0;
}