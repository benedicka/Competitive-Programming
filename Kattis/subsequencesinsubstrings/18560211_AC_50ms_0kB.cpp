#include<bits/stdc++.h>
using namespace std;
char s[1000010],t[110];
long long ls,lt,x[100010][30],ans,r,sebelum;
int main()
{
	scanf("%s %s",&s,&t);
	ls = strlen(s);
	lt = strlen(t);
	memset(x,ls,sizeof(x));
	for(int i=ls;i>=0;i--)
	{
		if(i==ls) for(int j=0;j<26;j++) x[i][j] = ls;
		else
		{
			for(int j=0;j<26;j++)
			{
				x[i][j] = x[i+1][j];
			}
		}
		x[i][s[i]-'a'] = i;
	}
	for(int i=0;i<ls;i++)
	{
		if(s[i]==t[0])
		{
			r = i;
			for(int j=1;j<lt;j++)
			{
				r = x[r+1][t[j]-'a'];
				if(r>=ls)
				{
					r = -1;
					break;
				}		
			}
			//printf("%lld %lld\n",i,r);
			if(r!=-1)
			{
				ans+=(i+1-sebelum)*(ls-r);
				sebelum = i+1;	
			}
			
		}
		
	}
	printf("%lld\n",ans);
	return 0;
}