#include<bits/stdc++.h>
using namespace std;
map<int , bool>mp;
int tmp=0,x=1,n;
int main()
{
	while(tmp<500)
	{
		tmp+=x;
		x++;
		mp[tmp] = 1;
	}
	scanf("%d",&n);
	if(mp[n]) printf("YES\n");
	else printf("NO\n");
	return 0;
}