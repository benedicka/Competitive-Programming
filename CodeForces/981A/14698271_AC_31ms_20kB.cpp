#include<stdio.h>
#include<string>
#include<iostream>
using namespace std;
int ans;
bool palin(string x)
{
	int l,r;
	l = 0;
	r = x.size()-1;
	while(l<=r)
	{
		if(x[l]!=x[r]) return 0;
		l++;
		r--;
	}
	return 1;
}
int main()
{
	int l;
	string x,tmp;
	ans  = 0;
	cin>>x;
	l = x.size();
	for(int i=1;i<=l;i++)
	{
		for(int j=0;j<=l-i;j++)
		{
			tmp.clear();
			for(int k=j ; k<i+j;k++)
			{
				tmp+=x[k];
			}
			//cout<<tmp<<endl;
			if(!palin(tmp)) ans = i;
		}
	}
	printf("%d\n",ans);
	return 0;
}