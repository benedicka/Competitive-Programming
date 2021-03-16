#include<bits/stdc++.h>
using namespace std;
string x;
int t,cnt;
bool ok;
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		ok = 1;
		cin>>x;
		cnt = (x[0]-'a'+1)%26;
		for(int i=1;i<x.size();i++)
		{
			if(x[i]-'a'!=cnt)
			{
				ok = 0;
				break;
			}
			cnt+=1;
			cnt%=26;
		}
		printf("%s\n",ok?"YES":"NO");
	}
	return 0;
}