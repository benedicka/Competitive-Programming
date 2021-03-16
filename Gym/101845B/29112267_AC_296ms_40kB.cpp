#include<bits/stdc++.h>
using namespace std;
string a,b,x;
int ans,cntA,cntB;
int f(string cek)
{
	int res=0;
	for(int i=0;i<cek.size()-1;i++)
	{
		if(cek[i]!=b[i])
		{
			res++;
			cek[i] = '1' - (cek[i]-'0');
			cek[i+1] = '1' - (cek[i+1]-'0');
		}
	}
	return (cek[cek.size()-1]==b[b.size()-1])?res:INT_MAX-1;
}
int main()
{
	cin>>a>>b;
	for(int i=0;i<a.size();i++)
	{
		cntA+=(a[i]-'0');
		cntB+=(b[i]-'0');
	}
	if(abs(cntA-cntB)%2) printf("-1\n");
	else
	{
		ans = INT_MAX;
		for(int i=0;i<a.size();i++)
		{
			x = "";
			for(int j=0;j<a.size();j++)
			{
				x+=(a[(i+j)%a.size()]);	
			}
			ans = min(ans,f(x));
			x[0] = '1' - (x[0]-'0');
			x[a.size()-1] = '1' - (x[a.size()-1]-'0');
			ans = min(ans,1+f(x));
		}
		printf("%d\n",ans);
	}
	
	return 0;
}