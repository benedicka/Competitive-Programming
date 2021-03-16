#include<stdio.h>
#include<algorithm>
using namespace std;
int ans,n,x,f[100010];
int main()
{
	ans = 1;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&x);
		for(int i=2;i*i<=x;i++)
		{
			if(x%i==0)
			{
				f[i]++;
				while(x%i==0)x/=i;
			} 
		}
		if(x>1) f[x]++;
	}
	for(int i=0;i<=100000;i++)
	{
		ans = max(ans,f[i]);
	} 
	printf("%d\n",ans);
	return 0; 
}