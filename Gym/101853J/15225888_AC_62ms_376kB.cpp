#include<stdio.h>
#include<math.h>
#include<map>
#include<utility>
#include<algorithm>
using namespace std;
int t,n,a[100010],ans,cnt;
map < int , int > mp;
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		ans = 0;
		scanf("%d",&n);
		mp.clear();
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			mp[a[i]]++;
		}
		sort(a,a+n);
		for(int i=0;i<n;i++)
		{
			ans = max(ans,mp[a[i]]);
			ans = max(ans,mp[a[i]-1]+mp[a[i]]);
			ans = max(ans,mp[a[i]+1]+mp[a[i]]);
		}
		printf("%d\n",ans);
	}
	return 0;
}