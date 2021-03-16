#include<stdio.h>
#include<algorithm>
using namespace std;
int n,x[100010],ans=0,c=0;
int main()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
	}
	sort(x,x+n);
	for(int i=n-1;i>=0;i--)
	{
		c++;
		if(c%3!=0)ans+=x[i];
	}
	printf("%d\n",ans);
	return 0;
}