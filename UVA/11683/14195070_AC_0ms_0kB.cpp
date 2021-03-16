#include <stdio.h>
int h,l;
int x,ans,height;
int main()
{
	while(scanf("%d",&h)!=EOF)
	{
		if(h==0) break;
		scanf("%d",&l);
		ans = 0;
		for(int i=0;i<l;i++)
		{
			scanf("%d",&x);
			if(i==0)
			{
				ans+=(h-x);
				height = (h-x);
			}
			else if(h-x>height)
			{
				ans+=(h-x-height);
				height = h-x;
			}
			else height = (h-x);
			//printf("h = %d\n",height);
		}
		printf("%d\n",ans);
	}
	return 0;
}