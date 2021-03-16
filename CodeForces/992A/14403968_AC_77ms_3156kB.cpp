#include<map>
#include<stdio.h>
using namespace std;
int main()
{
	int n,a,ans;
	ans = 0;
	map < int , bool > mp;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&a);
		if(a!=0 && mp[a]==0)
		{
			mp[a] = 1;
			ans++;
		}
	}
	printf("%d\n",ans);
	return 0;
}