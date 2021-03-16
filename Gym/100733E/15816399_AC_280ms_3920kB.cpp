#include<bits/stdc++.h>
using namespace std;
int n,a[1000010],m;
int main()
{
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	sort(a+1,a+1+n);
	printf("%d\n",a[m]);
	return 0;
}