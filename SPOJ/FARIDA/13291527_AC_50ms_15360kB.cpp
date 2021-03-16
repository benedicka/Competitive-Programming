#include<stdio.h>
long long max(long long a,long long b)
{
	if(a>b) return a;
	else return b;
}
int main()
{
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
		int n;
		long long ans[10001],a[10001];
		scanf("%d",&n);
		if(n==0) printf("Case %d: %lld\n",i+1,0);
		else
		{
			for(int j=0;j<n;j++)
			{
				scanf("%lld",&a[j]);
			}
			
			for(int j=0;j<n;j++)
			{
				
				if(j==0) ans[j] = a[0];
				else if(j==1) ans[j] = max(ans[0],a[1]);
				else ans[j] = max((ans[j-2]+a[j]),ans[j-1]);
			//	printf("a[j] = %lld ans[j-2]+a[j] = %lld ans[j-1] = %lld\n",a[j],ans[j-2]+a[j],ans[j-1]);
				
			}
//			for(int j=0;j<n;j++)
//			{
//				printf("%lld ",ans[j]);
//			}
//			printf("\n");
			printf("Case %d: %lld\n",i+1,ans[n-1]);
		}
	}
	return 0;
}