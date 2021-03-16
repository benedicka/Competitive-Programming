#include<stdio.h>
int min(int a,int b)
{
	if(a<b) return a;
	else return b;
}
int main()
{
	int n,x[1010],g[1010],a,b,game=1,cnta,cntb,cnt=0;
	while(scanf("%d",&n)!=EOF)
	{
		if(n==0) break;
		
		for(int i=0;i<n;i++)
		{
			scanf("%d",&x[i]);
		}
		printf("Game %d:\n",game++);
		while(1)
		{
			cnt = 0;
			a = b = 0;
			for(int i=0;i<n;i++)
			{
				scanf("%d",&g[i]);
				if(g[i]==0) cnt++;
				if(g[i]==x[i]) a++;
			}
			if(cnt==n) break;
			for(int i=1;i<=9;i++)
			{
				int cnt1=0,cnt2=0;
				for(int j=0;j<n;j++)
				{
					if(g[j]==i) cnt1++;
					if(x[j]==i) cnt2++;
				}
				b+=(min(cnt1,cnt2));
			}
			b-=a;
			printf("    (%d,%d)\n",a,b);
		}
	}
	return 0;
}