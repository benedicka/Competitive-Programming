#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	bool ok=1;
	int t,n;
	long long a[100010];
	scanf("%d",&t);
	while(t--)
	{
		ok =1;
		scanf("%d",&n);
		for(int i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
		}
		sort(a,a+n);
		for(int i=1;i<n;i++)
		{
			if(a[i]-a[i-1]>1) 
			{
				ok = 0;
				break;
			}
		}
		if(ok==1) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}