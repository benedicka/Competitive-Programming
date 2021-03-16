#include<bits/stdc++.h>
using namespace std;
int n,ans,a[100010];
int main()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("%d\n",(int)log2(n)+1);
	return 0;
}