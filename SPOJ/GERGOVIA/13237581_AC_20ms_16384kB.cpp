#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	int n,a[100010];
	long ans;
	while(scanf("%d",&n)!=EOF)
	{
		ans = 0;
		if(n==0) break;
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);	
		}	
		for(int i=1;i<n;i++)
		{
			if(a[i-1]>=0)ans+=a[i-1];
			else ans+=(a[i-1]*-1);
			a[i] = a[i-1]+a[i];
			
		}
		
		
		printf("%ld\n",ans);
	}
	return 0;
}