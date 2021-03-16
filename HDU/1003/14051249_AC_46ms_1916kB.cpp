#include<stdio.h>
#include<climits>
int t,n,ans,x[100010],l,f,beg,c;
int main()
{
	scanf("%d",&t);
	for(int tc=1;tc<=t;tc++)
	{
		if(tc!=1) printf("\n");
		scanf("%d",&n);
		for(int i=0;i<n;i++)
		{
			scanf("%d",&x[i]);
		}
		beg = 0;
		c = 0;
		ans = INT_MIN;
		for (int i=0;i<n;i++)
    	{
    		//printf("%d\n",max_ending_here);
        	c+=x[i];
        	if (ans < c)
			{
				l = beg;
				f = i;
				ans = c;
			}
        	if (c < 0) 
			{
				c = 0;
				beg = i+1;
			}
    	}
		printf("Case %d:\n",tc);
		printf("%d %d %d\n",ans,l+1,f+1);
	}
	return 0;
}