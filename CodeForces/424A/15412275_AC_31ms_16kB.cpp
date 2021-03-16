#include<stdio.h>
#include<math.h>
#include<string>
#include<map>
#include<iostream>
using namespace std;
int n,ans;
char x[210];
map < char , int > mp;
int main()
{
	scanf("%d",&n);
	scanf("%s",&x);
	for(int i=0;i<n;i++)
	{
		mp[x[i]]++;
	}
	if(mp['x']<mp['X'])
	{
		for(int i=0;i<n;i++)
		{
			if(x[i]=='X')
			{
				ans++;
				x[i] = 'x';
				mp['X']--;
				mp['x']++;
			}
			if(mp['X']==mp['x']) break;
		}
	}
	else if(mp['X']<mp['x'])
	{
		for(int i=0;i<n;i++)
		{
			if(x[i]=='x')
			{
				ans++;
				x[i] = 'X';
				mp['x']--;
				mp['X']++;
			}
			if(mp['x']==mp['X']) break;
		}
	}
	printf("%d\n%s\n",ans,x);
	return 0;
}