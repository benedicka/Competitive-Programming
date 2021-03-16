#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,ans,a,x;
	scanf("%d",&t);
	while(t--)
	{	
		scanf("%d",&n);
		for(int i=0;i<n;i++)
		{
			x = 31;
			ans = 0;
			if(i>0) printf(" ");
			scanf("%d",&a);
			while(x>=0)
			{
				if(a&(1<<x)) ans++;
				x--;
			}
			printf("%d",ans);
		}
		printf("\n");
	}
	return 0;
}