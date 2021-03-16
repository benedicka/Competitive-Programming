#include<stdio.h>
#include<string>
#include<iostream>
#include<map>
using namespace std;
int main()
{
	string a,b;
	map < char , int> mp;
	int c,ans,temp;
	int t,l1,l2;
	scanf("%d",&t);
	while(t--)
	{
		temp = 0;
		c = 0;
		ans = 0;
		cin>>a>>b;
		l1 = a.size();
		l2 = b.size();
		for(int i=0;i<l2;i++)
		{
			mp[b[i]]++;
		}
		for(int i=0;i<l1;i++)
		{
			if(mp[a[i]]==0)  break;
			else
			{
				mp[a[i]]--;
				ans++;
			}
		}
		printf("%d\n",ans);
		mp.clear();
	}
	return 0;
}