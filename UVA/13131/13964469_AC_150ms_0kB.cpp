#include<stdio.h>
int t,n,k,ans;
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&n,&k);
		ans = 0;
		for(int i=1;i*i<=n;i++)
		{
			if(n%i==0 && i%k!=0)
			{
				//printf("%d\n",i);
				ans+=i;
			}
			if(n%i==0 && i!=n/i && (n/i)%k!=0) 
			{
				//printf("%d\n",n/i);
				ans+=(n/i);
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}