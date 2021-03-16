#include<bits/stdc++.h>
using namespace std;
string s;
char tmp = 'z';
int l;
int main()
{
	cin>>s;
	l = s.size() - 1;
	for(int i=l;i>=0;i--)
	{
		if(s[i]<=tmp)
		{
			s[i] = tmp;
			tmp--;
		}
	}
	if(tmp<'a') cout<<s<<endl;
	else cout<<-1<<endl;
	return 0;
}