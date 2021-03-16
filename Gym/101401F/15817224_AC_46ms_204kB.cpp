#include<bits/stdc++.h>
using namespace std;
char x[200010];
int l,ans,tmp;
int main()
{
	scanf("%s",&x);
	l = strlen(x);
	ans = 0;
	tmp = 6;
	if(l==3) tmp = 0;
	
	if(strstr(x,"RGB"))
	{
		ans = 0;
		bool find = 0;
		for(int i=0;i<=l-3;i++)
		{
			if(x[i]=='R' && x[i+1]=='G' && x[i+2]=='B')
			{
				if(i==0 || i==l-3) find = 1;
			}
		}
		if(find) ans = 1;
		else ans = 2;
		tmp = min(tmp,ans);
	}
	if(strstr(x,"RBG"))
	{
		ans = 0;
		bool find = 0;
		for(int i=0;i<=l-3;i++)
		{
			if(x[i]=='R' && x[i+1]=='B' && x[i+2]=='G')
			{
				if(i==0 || i==l-3) find = 1;
			}
		}
		if(find) ans = 1;
		else ans = 2;
		tmp = min(tmp,ans);
	}
	if(strstr(x,"BRG"))
	{
		ans = 0;
		bool find = 0;
		for(int i=0;i<=l-3;i++)
		{
			if(x[i]=='B' && x[i+1]=='R' && x[i+2]=='G')
			{
				if(i==0 || i==l-3) find = 1;
			}
		}
		if(find) ans = 1;
		else ans = 2;
		tmp = min(tmp,ans);
	}
	if(strstr(x,"BGR"))
	{
		ans = 0;
		bool find = 0;
		for(int i=0;i<=l-3;i++)
		{
			if(x[i]=='B' && x[i+1]=='G' && x[i+2]=='R')
			{
				if(i==0 || i==l-3) find = 1;
			}
		}
		if(find) ans = 1;
		else ans = 2;
		tmp = min(tmp,ans);
	}
	if(strstr(x,"GRB"))
	{
		ans = 0;
		bool find = 0;
		for(int i=0;i<=l-3;i++)
		{
			if(x[i]=='G' && x[i+1]=='R' && x[i+2]=='B')
			{
				if(i==0 || i==l-3) find = 1;
			}
		}
		if(find) ans = 1;
		else ans = 2;
		tmp = min(tmp,ans);
	}
	if(strstr(x,"GBR"))
	{
		ans = 0;
		bool find = 0;
		for(int i=0;i<=l-3;i++)
		{
			if(x[i]=='G' && x[i+1]=='B' && x[i+2]=='R')
			{
				if(i==0 || i==l-3) find = 1;
			}
		}
		if(find) ans = 1;
		else ans = 2;
		tmp = min(tmp,ans);
	}
	if(strstr(x,"GB"))
	{
		ans = 0;
		bool find = 0;
		for(int i=0;i<=l-2;i++)
		{
			if(x[i]=='G' && x[i+1]=='B')
			{
				if(i==0 || i==l-2) find = 1;
			}
		}
		if(find) ans = 1;
		else ans = 2;
		if(x[0]=='R' || x[l-1]=='R') ans+=1;
		else ans+=2;
		tmp = min(tmp,ans);
	}
	if(strstr(x,"BG"))
	{
		ans = 0;
		bool find = 0;
		for(int i=0;i<=l-2;i++)
		{
			if(x[i]=='B' && x[i+1]=='G')
			{
				if(i==0 || i==l-2) find = 1;
			}
		}
		if(find) ans = 1;
		else ans = 2;
		if(x[0]=='R' || x[l-1]=='R') ans+=1;
		else ans+=2;
		tmp = min(tmp,ans);
	}
	if(strstr(x,"RB"))
	{
		ans = 0;
		bool find = 0;
		for(int i=0;i<=l-2;i++)
		{
			if(x[i]=='R' && x[i+1]=='B')
			{
				if(i==0 || i==l-2) find = 1;
			}
		}
		if(find) ans = 1;
		else ans = 2;
		if(x[0]=='G' || x[l-1]=='G') ans+=1;
		else ans+=2;
		tmp = min(tmp,ans);
	}
	if(strstr(x,"BR"))
	{
		ans = 0;
		bool find = 0;
		for(int i=0;i<=l-2;i++)
		{
			if(x[i]=='B' && x[i+1]=='R')
			{
				if(i==0 || i==l-2) find = 1;
			}
		}
		if(find) ans = 1;
		else ans = 2;
		if(x[0]=='G' || x[l-1]=='G') ans+=1;
		else ans+=2;
		tmp = min(tmp,ans);
	}
	if(strstr(x,"RG"))
	{
		ans = 0;
		bool find = 0;
		for(int i=0;i<=l-2;i++)
		{
			if(x[i]=='R' && x[i+1]=='G')
			{
				if(i==0 || i==l-2) find = 1;
			}
		}
		if(find) ans = 1;
		else ans = 2;
		if(x[0]=='B' || x[l-1]=='B') ans+=1;
		else ans+=2;
		tmp = min(tmp,ans);
	}
	if(strstr(x,"GR"))
	{
		ans = 0;
		bool find = 0;
		for(int i=0;i<=l-2;i++)
		{
			if(x[i]=='G' && x[i+1]=='R')
			{
				if(i==0 || i==l-2) find = 1;
			}
		}
		if(find) ans = 1;
		else ans = 2;
		if(x[0]=='B' || x[l-1]=='B') ans+=1;
		else ans+=2;
		tmp = min(tmp,ans);
	}
	
	if(x[0]!=x[l-1]) ans = 4;
	else ans = 5;
	tmp = min(tmp,ans);
	printf("%d\n",tmp);
	return 0;
}