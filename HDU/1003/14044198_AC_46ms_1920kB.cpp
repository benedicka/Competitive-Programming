#include<stdio.h>
#include<climits>
int t,n,ans,x[100010],l,f,beg;
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
		int ans = INT_MIN, max_ending_here = 0;
		for (int i=0;i<n;i++)
    	{
    		//printf("%d\n",max_ending_here);
        	max_ending_here = max_ending_here + x[i];
        	if (ans < max_ending_here)
			{
				l = beg;
				f = i;
				ans = max_ending_here;
			}
        	if (max_ending_here < 0) 
			{
				max_ending_here = 0;
				beg = i+1;
			}
    	}
		printf("Case %d:\n",tc);
		printf("%d %d %d\n",ans,l+1,f+1);
	}
	return 0;
}