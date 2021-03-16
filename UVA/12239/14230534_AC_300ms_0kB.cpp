#include<stdio.h>
#include<map>
#include<stdlib.h>
using namespace std;
int n,b,ball[100];
bool ok;
map < int , bool > mp;
int main()
{
	while(scanf("%d %d",&n,&b)!=EOF)
	{
		if(n==0 && b==0) break;
		mp.clear();
		ok = 1;
		for(int i=0;i<b;i++)
		{
			scanf("%d",&ball[i]);
		}
		for(int i=0;i<b;i++)
		{
			for(int j=0;j<b;j++)
			{
				mp[abs(ball[i]-ball[j])] = 1;
			}
		}
		for(int i=0;i<=n;i++)
		{
			if(!mp[i])
			{
				ok = 0;
				break;
			}
		}
		if(ok) printf("Y\n");
		else printf("N\n");
	}
	return 0;
}