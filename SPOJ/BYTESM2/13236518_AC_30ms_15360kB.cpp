#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	int t,h,w,a[110][110],ans;
	scanf("%d",&t);
	while(t--)
	{
		ans = 0;
		scanf("%d %d",&h,&w);
		for(int i=0;i<h;i++)
		{
			for(int j=0;j<w;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		for(int i=h-2;i>=0;i--)
		{
			for(int j = 0;j<w;j++)
			{
				if(j==0) a[i][j] = a[i][j]+max(a[i+1][j],a[i+1][j+1]);
				else if(j==w-1) a[i][j] = a[i][j]+max(a[i+1][j],a[i+1][j-1]);
				else
				{
					a[i][j] = a[i][j]+max(max(a[i+1][j],a[i+1][j-1]),a[i+1][j+1]);
				}
				if(a[i][j]>ans) ans = a[i][j];
			}
		}
		printf("%d\n",ans);
	}
	
	
	return 0;
}