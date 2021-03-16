#include<stdio.h>
#include<string>
#include<algorithm>
#include<iostream>
using namespace std;
string j;
int mn,mx,guess;
bool ok;
int main()
{
	ok = 1;
	mn = 0;
	mx = 11;
	while(scanf("%d",&guess)!=EOF)
	{
		if(guess==0) break;
		getchar();
		getline(cin,j);
		if(j=="right on")
		{
			if(mn>= guess || mx<=guess) ok = 0;
			if(ok) printf("Stan may be honest\n");
			else printf("Stan is dishonest\n");
			mn = 0;
			mx = 11;
			ok = 1;
		}
		else if(j=="too high")
		{
			if(guess<=mn) ok = 0;
			mx = min(mx,guess);
		}
		else
		{
			if(guess>=mx) ok = 0;
			mn = max(mn,guess);
		}
	}
	return 0;
}