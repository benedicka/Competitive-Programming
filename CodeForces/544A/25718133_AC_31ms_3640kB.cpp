#include<bits/stdc++.h>
using namespace std;
int jum;
string x,tmp;
vector < string > ans;
bool ada[30];
int main()
{
	scanf("%d",&jum);
	cin>>x;
	ada[x[0]-'a'] = 1;
	tmp+=x[0];
	for(int i=1;i<x.size();i++)
	{
		if(!ada[x[i]-'a'])
		{
			ada[x[i]-'a'] = 1;
			if(ans.size()<jum-1)
			{
				ans.push_back(tmp);
				tmp = "";
			}	
		}
		tmp+=x[i];
	}
	if(tmp!="")ans.push_back(tmp);
	if(ans.size()<jum) printf("NO\n");
	else
	{
		printf("YES\n");
		for(int i=0;i<ans.size();i++)
		{
			cout<<ans[i]<<'\n';
		}
	}
	return 0;
}