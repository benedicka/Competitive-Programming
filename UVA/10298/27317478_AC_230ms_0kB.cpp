#include <bits/stdc++.h>
using namespace std;
int t,ans,tmp;
string a;
int f(string pat, int m)
{ 
	bool ok = 0;
	for(int i=1;i<=m;i++)
	{
		if(m%i) continue;
		ok = 1;
		for(int j=i;j<m;j++)
		{
			if(pat[j]!=pat[j%i])
			{
				//printf("%c %c %d %d\n",pat[j],pat[j%i],j,i);
				ok = 0;
				break;
			}
		}
		if(ok) 
		{
			//printf("%d\n",i);
			return (m/i);
		}
	}
} 
int main()
{
	while(1)
	{
		cin>>a;
		if(a==".") break;
                if(a==" ") printf("0\n");
		else printf("%d\n",f(a,a.size()));
	}
	return 0;
}