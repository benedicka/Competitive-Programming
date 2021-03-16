#include<bits/stdc++.h>
using namespace std;
char x[200010];
int l;
map < char ,  int > mp;
int main()
{
	scanf("%s",&x);
	l = strlen(x);
	if(l>26) printf("IMPOSSIBLE\n");
	else
	{
		for(int i=0;i<l;i++)
		{
			mp[x[i]]++;
		}
		for(int i=0;i<l;i++)
		{
			if(mp[x[i]]>1)
			{
				for(int j='a';j<='z';j++)
				{
					if(mp[j]==0)
					{
						mp[x[i]]--;
						x[i] = j;
						mp[x[i]]++;
					}
				}
			}
		}
		printf("%s\n",x);
	}
	return 0;
}