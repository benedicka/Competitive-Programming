#include<stdio.h>
#include<string.h>
#include<map>
#include<string>
using namespace std;
map < char , char > mp;
char x[30];
int l,r;
bool p,m,c;
void pre()
{
	string a,b;
	int s;
	a = "ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";
	b = "A   3  HIL JM O   2TUVWXY51SE Z  8 ";
	s = a.size();
	for(int i=0;i<s;i++)
	{
		mp[a[i]] = b[i];
	}
}
int main()
{
	pre();
	c = 0;
	while(scanf("%s",&x)!=EOF)
	{
		c = 1;
		l = 0;
		r = strlen(x)-1; 
		p = m = 1;
		while(l<=r)
		{
			if(x[l]!=x[r]) p = 0;
			if(x[r]!=mp[x[l]]) m =0;
			l++;
			r--;
		}
		if(!p && !m) printf("%s -- is not a palindrome.",x);
		else if(!p && m) printf("%s -- is a mirrored string.",x);
		else if(p && !m) printf("%s -- is a regular palindrome.",x);
		else printf("%s -- is a mirrored palindrome.",x);
		printf("\n\n");
	}	
	return 0;
}