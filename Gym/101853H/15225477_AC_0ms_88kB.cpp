#include<stdio.h>
#include<math.h>
#include<map>
#include<utility>
using namespace std;
int t,a,ans;
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&a);
		ans = a/6;
		ans = sqrt(ans);
		printf("%d\n",ans);
	}	
	return 0;
}