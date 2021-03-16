#include<bits/stdc++.h>
using namespace std;
string a;
int sz;
bool vowel(char x)
{
	if(toupper(x)=='A' || toupper(x) =='E' || toupper(x) == 'I' || toupper(x) =='O' || toupper(x) =='U' || toupper(x) =='Y') return 1;
	return 0;
}
int main()
{
	getline(cin,a);
	sz = a.size();
	for(int i=sz-1;i>=0;i--)
	{
		if(isalpha(a[i]))
		{
			if(vowel(a[i])) printf("YES\n");
			else printf("NO\n");
			break;
		}
	}
	return 0;
}