#include<bits/stdc++.h>
using namespace std;
string x;
int t,ans;
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		cin>>x;
		ans = 1;
		for(int i=0;i<x.size();i++)
		{
			if(isupper(x[i])) ans++;
		}
		printf("%s\n",ans>7?"NO":"YES");
	}
	return 0;
}