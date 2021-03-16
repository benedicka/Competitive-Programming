#include<map>
#include<stdio.h>
using namespace std;
int main()
{
	int n,ans;
	ans = 0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=n;j++)
		{
			int x = i^j;
			//printf("%d %d %d\n",i,j,x);
			if(x>i && x>j && x<=n && i+j>x) 
			{
				ans++;
				//printf("%d %d %d\n",i,j,x);
			}
		}
	}
	printf("%d\n",ans);
	return 0;
}