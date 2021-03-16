#include<bits/stdc++.h>
using namespace std;
int t,l,idx;
char x[1010],ada[30];
bool ok,odd;
map < char , int > mp;
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		mp.clear();
		scanf("%s",&x);
		l = strlen(x);
		idx = 0;
		ok = 1;
		odd = 1;
		for(int i=0;i<l;i++)
		{
			if(mp[x[i]]==0) 
			{
				ada[idx] = x[i];
				idx++;
			}
			mp[x[i]]++;
		}
		for(int i=0;i<idx;i++)
		{
			if(mp[ada[i]]%2!=0 && !odd)
			{
				ok = 0;
				break;
			}
			if(mp[ada[i]]%2!=0 && odd) odd = 0;
		}
		if(!ok) printf("impossible\n");
		else
		{
			char tgh = '.';
			for(int i='a';i<='z';i++)
			{
				if(mp[i]%2==0)
				{
					for(int j=0;j<mp[i];j+=2)
					{
						printf("%c",i);
					}
				}
				else
				{
					mp[i]-=1;
					tgh = i;
					for(int j=0;j<mp[i];j+=2)
					{
						printf("%c",i);
					}
				}
			}
			if(tgh!='.')printf("%c",tgh);
			for(int i='z';i>='a';i--)
			{
				if(mp[i]%2==0)
				{
					for(int j=0;j<mp[i];j+=2)
					{
						printf("%c",i);
					}
				}
			}
			printf("\n");
		}
	}
	return 0;
}