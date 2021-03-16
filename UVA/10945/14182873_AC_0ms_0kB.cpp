#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<string>
#include<iostream>
using namespace std;
int l,r;
string a;
bool p;
int main()
{
	while(getline(cin,a))
	{
		if(a=="DONE") break;
		p = 1;
		l = 0;
		r = a.size()-1;
		while(l<=r)
		{
			while(!isalpha(a[l]))
			{
				l++;
			}
			while(!isalpha(a[r]))
			{
				r--;
			}
			if(l>r) break;
			if(tolower(a[l])!=tolower(a[r]))
			{
				p = 0;
				break;
			}
			l++;
			r--;
		}
		if(!p) cout<<"Uh oh.."<<endl;
		else cout<<"You won't be eaten!"<<endl;
	}
	return 0;
}