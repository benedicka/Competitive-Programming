#include<bits/stdc++.h>
using namespace std;
bool palin(string x)
{
	int l=0,r;
	
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
	int len,ans = 0;
	string input,tmp;
	cin>>input;
	len = input.size();
	for(int i = 0;i<len;i++)
	{
		for(int j=i;j<len;j++)
		{
			if(j==i) tmp = input[j];
			else tmp+=input[j];
			if(palin(tmp)) 
			{
				//cout<<tmp<<endl;
				ans++;
			}
		}
	}
	printf("%d\n",ans);
	return 0;
}