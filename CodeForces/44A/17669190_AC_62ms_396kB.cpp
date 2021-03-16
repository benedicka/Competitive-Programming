#include<bits/stdc++.h>
using namespace std;
string x;
map < string , int > mp;
int n,cnt=0;
int main()
{
	scanf("%d",&n);getchar();
	while(n--)
	{
		getline(cin,x);	
		if(mp[x]==0) cnt++;
		mp[x]++;
	}
	printf("%d\n",cnt);
	return 0;
}