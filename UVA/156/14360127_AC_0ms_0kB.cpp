#include<algorithm>
#include<map>
#include<string>
#include<iostream>
#include<vector>
#include<ctype.h>
using namespace std;
string input,tmp;
int l,s;
map <string , int > exist;
vector < string > ans;
int main()
{
	while(cin>>input)
	{
		if(input==" ") continue;
		else if(input=="#") break;
		ans.push_back(input);
		tmp = input;
		l = tmp.size();
		for(int j=0;j<l;j++)
		{
			tmp[j] = tolower(tmp[j]);
		}
		sort(tmp.begin(),tmp.end());
		exist[tmp]++;
	}
	sort(ans.begin(),ans.end());
	s = ans.size();
	for(int i=0;i<s;i++)
	{
		tmp = ans[i];
		l = tmp.size();
		for(int j=0;j<l;j++)
		{
			tmp[j] = tolower(tmp[j]);
		}
		sort(tmp.begin(),tmp.end());
		if(exist[tmp]==1)
		{
			cout<<ans[i]<<endl;
		}
	}
	return 0;
}