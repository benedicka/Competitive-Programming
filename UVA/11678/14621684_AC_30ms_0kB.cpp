#include<stdio.h>
#include<map>
#include<string>
#include<utility>
#include<iostream>
#include<stack>
#include<queue>
#include<map>
using namespace std;
map < int , bool > mp;
map < int , bool > mp2;
int min(int a , int b)
{
	if(a<b) return a;
	return b;
}
int main()
{
	int a,b,x[100010],y[100010],cnt1,cnt2,ans;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		mp.clear();
		ans = 0;
		cnt1 = cnt2 = 0;
		if(a==0 && b==0) break;
		for(int i=0;i<a;i++)
		{
			scanf("%d",&x[cnt1]);
			if(!mp[x[cnt1]])
			{
				mp[x[cnt1]] = 1;
				cnt1++;
			}
		}
		mp2.clear();
		for(int i=0;i<b;i++)
		{
			scanf("%d",&y[cnt2]);
			if(!mp2[y[cnt2]])
			{
				mp2[y[cnt2]] = 1;
				cnt2++;
			}
		}
		if(cnt1<cnt2)
		{
			for(int i=0;i<cnt1;i++)
			{
				if(mp[x[i]] && !mp2[x[i]]) ans++;
			}
		}
		else
		{
			for(int i=0;i<cnt2;i++)
			{
				if(mp2[y[i]] && !mp[y[i]]) ans++;
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}