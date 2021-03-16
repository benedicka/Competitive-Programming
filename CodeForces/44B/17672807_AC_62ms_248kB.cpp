#include<bits/stdc++.h>
using namespace std;
int ans=0,a,b,c,n;
int main()
{
	scanf("%d %d %d %d",&n,&a,&b,&c);
	for(int i=0;i<=a;i+=2)
	{
		for(int j=0;j<=b;j++)
		{
			if((n-i/2-j)/2<=c && (n-i/2-j)%2==0 && (n-i/2-j)>=0)
			{
				//printf("%d %d %d\n",i/2,j,n-i/2-j);
				ans++;
			}
		}
	}
	printf("%d\n",ans);
	return 0;
}