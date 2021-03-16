#include<string>
#include<iostream>
#include<map>
#include<stdio.h>
#include<algorithm>
using namespace std;
int c,n,s;
map< char , bool> mp;
string x,y;
int main()
{
	while(scanf("%d",&n)!=EOF)
	{
		mp.clear();
		c = 0;
		if(n==-1) break;
		cin>>x>>y;
		s = y.size();
		for(int i=0;i<s;i++)
		{
			if(c==7 || x=="") break;
			if(x.find(y[i])!=string::npos)
			{
				x.erase(remove(x.begin(), x.end(), y[i]), x.end());
			}
			else if(!mp[y[i]])
			{
				mp[y[i]]= 1;
				c++;
			}
		}
		printf("Round %d\n",n);
		if(c==7) printf("You lose.");
		else if(x=="") printf("You win.");
		else printf("You chickened out.");
		printf("\n");
	}
	return 0;
}