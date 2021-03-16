#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	int t,b;
	int n,a[20];
	scanf("%d",&t);
	while (t--)
	{
		scanf("%d",&n);
		for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		sort(a,a+n);
		b=0;
		for(int i=n-1;i>0;i--)
		{
			b=b+a[i]-a[i-1];
		}
		printf("%d\n",2*b);
	}
	
		
		
	
	
	return 0;
}