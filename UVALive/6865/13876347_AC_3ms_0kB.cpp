#include<stdio.h>
int main()
{
	bool ok=1;
	int t,n,a,ans;
	ans = 0;
	while(scanf("%d %d",&n,&t)!=EOF)
	{
		ok = 1;
		ans = 0;
		while(n--)
		{
			scanf("%d",&a);
			if(t-a>=0 && ok==1)
			{	
				t-=a;
				ans++;
			}
			else ok = 0;
		}
		printf("%d\n",ans);
	}
	
	return 0;
}