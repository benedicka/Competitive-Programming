#include<iostream>
#include<string>
#include<stdio.h>
#include<algorithm>
using namespace std;
int l,ans,r,d;
string a;
int main()
{
	while(scanf("%d",&l)!=EOF)
	{
		if(l==0) break;
		cin>>a;
		ans = 2000001;
		r = 2000001;
		d = 2000001;
		for(int i=0;i<l;i++)
		{
			if(a[i]=='Z')
			{
				ans = 0;
				break;
			}
			else if(a[i]=='R')
			{
				ans = min(ans,abs(i-d));
				r = i;
			}
			else if(a[i]=='D')
			{
				ans = min(ans,abs(i-r));
				d = i;
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}