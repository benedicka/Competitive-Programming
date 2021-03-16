#include<bits/stdc++.h>
using namespace std;
int n,p,x[100010],ans;

int main()
{
	scanf("%d %d",&n,&p);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
	}
	sort(x,x+n);
	for(int i=0;i<n;i++)
	{
		ans = max(ans,p*(i+1)-x[i]);
	}
	printf("%d\n",ans+x[0]);
	return 0;
}