#include<string>
#include<stdio.h>
#include<map>
#include<iostream>
using namespace std;
map < char , int > mp;
string a;
int l,cnt,sum;
int main()
{
	mp['W'] = 64;
	mp['H'] = 32;
	mp['Q'] = 16;
	mp['E'] = 8;
	mp['S'] = 4;
	mp['T'] = 2;
	mp['X'] = 1;
	while(getline(cin,a))
	{
		if(a=="*") break;
		l = a.size();
		cnt = 0;
		sum = 0;
		for(int i=0;i<l;i++)
		{
			if(a[i]=='/')
			{
				
				if(sum==64) 
				{
					cnt++;
				}
				sum = 0;
			}
			else
			{
				sum+=mp[a[i]];
			}
		}
		printf("%d\n",cnt);
	}
	return 0;
}