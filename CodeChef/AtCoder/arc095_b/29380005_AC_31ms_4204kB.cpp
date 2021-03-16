#include<bits/stdc++.h>
using namespace std;
int n,x[1000010],ans;

int main()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
	}
	sort(x,x+n);
	if(n>2)
	{
		for(int i=n-1;i>=1;i--)
		{
			if(x[i]>=x[n-1]/2 && x[i-1]<=x[n-1]/2)
			{
			//	printf("%d %d\n",x[i-1],x[i]);
				ans = (abs(x[n-1]/2-x[i])<=abs(x[n-1]/2-x[i-1]))?x[i]:x[i-1];
				break;
			}
		}
	}
	else ans = x[0];
	printf("%d %d\n",x[n-1],ans);
	return 0;
}