#include<bits/stdc++.h>
using namespace std;
char x[5][5],tmp,ans[5],tmp2[5];
map< char , int >mp;
bool ok;
int main()
{
	ok = 1;
	for(int i=0;i<3;i++)
	{
		scanf("%s",&x[i]);
		if(x[i][1]=='>')
		{
			x[i][1] = '<';
			tmp = x[i][0];
			x[i][0] = x[i][2];
			x[i][2] = tmp;
		}
		mp[x[i][0]]++;
	}
	if(mp['A'] == mp['B'] || mp['A'] == mp['C']  || mp['C'] == mp['B']  ) ok = 0;
	for(int i=2;i>=0;i--)
	{
		for(int j='A';j<='C';j++)
		{
			if(mp[j]==i)
			{
				ans[abs(i-2)] = j;
				break;
			}
		}
	}
	if(ok) printf("%s\n",ans);
	else printf("Impossible\n");
	return 0;
}