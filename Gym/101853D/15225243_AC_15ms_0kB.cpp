#include<stdio.h>
#include<map>
#include<utility>
using namespace std;
int t,n,x,ans;
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		ans = 0;
		scanf("%d",&n);
		while(n--)
		{
			scanf("%d",&x);
			if(x!=0) ans++;
		}
		printf("%d\n",ans);
	}
	return 0;
}