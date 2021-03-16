#include<stdio.h>
#include<string.h>

int main()
{
	int t,n,ans,a;
	
	scanf("%d",&t);
	for (int i=0;i<t;i++)
	{
		char x[200];
		int move[120];
		scanf("%d",&n);
		ans=0;
		for (int j=0;j<n;j++)
		{
			scanf("%s",&x);
			if (x[0]=='L')
			{
				move[j]=-1;
				ans=ans-1;
			}
			else if (x[0]=='R')
			{
				
				move[j]=1;
				ans=ans+1;
			}
			else if (x[0]=='S')
			{
				scanf("%*s%d",&a);
				move[j]=move[a-1];
				ans=ans+move[j];
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}