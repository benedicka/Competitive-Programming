#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,x[1010],ans,idx;
	while(scanf("%d",&n)!=EOF)
	{
		for(int i=0;i<n;i++)
		{
			scanf("%d",&x[i]);
		}
		ans = 0;
		for(int i=0;i<n;i++)
		{	
			for(int j=i+1;j<n;j++)
			{
				if(x[i]>x[j])
				{
					ans++;
				}
			}
		}
		printf("Minimum exchange operations : %d\n",ans);
	}
	return 0;
}