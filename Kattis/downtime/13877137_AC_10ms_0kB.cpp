#include<stdio.h>
#include<algorithm>
using namespace std;
int time[200011];
int main()
{
	int n,k,ans=0,a;
	int sum = 0;
	scanf("%d %d",&n,&k);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a);
		time[a]++;
		time[1000+a]--;
	}
	for(int i=0;i<=200010;i++)
	{
		sum+=time[i];
		ans = max(ans,sum%k==0?sum/k : sum/k+1);
	}
	printf("%d\n",ans);
	return 0;
}