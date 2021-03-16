#include<stdio.h>
#include<math.h>
#include<string.h>
#include<map>
#include<iostream>
#include<algorithm>
using namespace std;
int p,n,ans,x;
map < int , bool > mp;
int main()
{
	ans = -1;
	scanf("%d %d",&p,&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&x);
		if(mp[x%p] && ans == -1)
		{
			ans = i;
		}
		mp[x%p] = 1;
	}
	printf("%d\n",ans==-1?ans:ans+1);
	return 0;
}