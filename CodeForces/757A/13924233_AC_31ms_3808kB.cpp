#include<stdio.h>
#include<string.h>
#include<map>
#include<algorithm>
using namespace std;
int l,ans;
map < char , int > mp;
char x[100010],y[1000];
int main()
{
	ans = 100010;
	scanf("%s",&x);
	l = strlen(x);
	strcpy(y,"Bulbasaur");
	for(int i=0;i<l;i++)
	{
		mp[x[i]]++;
	}
	mp['a']/=2;
	mp['u']/=2;
	for(int i=0;i<9;i++)
	{
		ans = min(ans,mp[y[i]]);
	}
	printf("%d\n",ans);
	return 0;
}