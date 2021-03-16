#include<bits/stdc++.h>
using namespace std;
char x,prev;
bool ok;
map < char , int > mp;
int main()
{
	prev = '1';
	while(1)
	{
		x = getchar();
		if(x=='\n') break;
		if(x!=prev)
		{
			if(ok)cout<<mp[prev];
			ok = 1; 
			mp[prev] = 0;
			prev = x;
			cout<<x;
		}
		mp[x]++;
	}
	printf("%d\n",mp[prev]);
	return 0;
}