#include<map>
#include<stdio.h>
#include<string.h>
#include<string>
using namespace std;
map < string , bool > mp;
int main()
{
	int t,ans,l;
	char x[10010],temp[3];
	scanf("%d",&t);
	while(t--)
	{
		ans = 0;
		mp.clear();
		scanf("%s",&x);
		l = strlen(x);
		for(int i=1;i<l;i++)
		{
			temp[0] = x[i-1];
			temp[1] = x[i];
			temp[2] = '\0';
			if(mp[temp]==0)
			{
				ans++;
				mp[temp] = 1;
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}