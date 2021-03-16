#include <stdio.h>
#include<math.h>
int main()
{
	int t,n,sum,a,cnt;
	double s;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
		scanf("%d %lf",&n,&s);
		cnt = 0;
		for(int j=0;j<n;j++)
		{
			scanf("%d",&a);
			if(a>=50)
			{
				cnt++;
			}
		}
		if(cnt>=ceil((double)n*(double)s)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}