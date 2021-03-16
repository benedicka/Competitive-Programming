#include<bits/stdc++.h>
using namespace std;
map < char , long long > mp;
char x;
long long ans = 0;
int main()
{
	while(1)
	{
		x = getchar();
		if(x=='\n') break;
		//printf("%c\n",x);
		mp[x]++;
	}
	for(int i='a';i<='z';i++)
	{
		//printf("%c\n",i);
		ans+=((long long)mp[i]*mp[i]);
	}
	for(int i='0';i<='9';i++)
	{
		//printf("%c\n",i);
		ans+=((long long)mp[i]*mp[i]);
	}
	printf("%lld\n",ans);
	return 0;
}