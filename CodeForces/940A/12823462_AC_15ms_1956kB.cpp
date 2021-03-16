#include<stdio.h>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{
	int n,max,a[101],ans,c;
	scanf("%d %d",&n,&max);
	for(int i =0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	sort(a,a+n);
	
	if(n==1) ans = 0 ;
	for(int i=0;i<n-1;i++)
	{
		int key;
		key =a[i]+max;
		c = 1;
		for(int j=i+1;j<n;j++)
		{
			if(a[j]>=a[i] && a[j]<=key)c++;
		}
		if(i==0) ans = n-c;
		if(ans>n-c) 
		{
			ans = n-c;
		}
	}

	printf("%d\n",ans);
	return 0;
}