#include<stdio.h>
#include<algorithm>
using namespace std;
int n,m,a[55],ans;
int main()
{
	ans = 1000000;
	scanf("%d %d",&n,&m);
	for(int i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	sort(a,a+m);
	for(int i=0;i<=m-n;i++)
	{
		//printf("%d %d\n",a[i],a[i+n-1]);
		ans = min(ans,(a[i+n-1]-a[i]));
	}
	printf("%d\n",ans);
	return 0;
}