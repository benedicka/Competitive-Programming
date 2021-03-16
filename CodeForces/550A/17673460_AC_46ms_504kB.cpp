#include<bits/stdc++.h>
using namespace std;
string x;
int l;
bool ok1,ok2,ans1,ans2;
int main()
{
	cin>>x;
	l = x.size();
	for(int i=0;i<l;i++)
	{
		if(i+1<l && !ok1 &&x[i]=='A' && x[i+1]=='B')
		{
			i+=1;
			ok1 = 1;
		}
		else if(i+1<l && ok1 && x[i]=='B' && x[i+1]=='A')
		{
			i+=1;
			ok2 =1;
		}
	}
	if(ok1 && ok2) ans1 = 1;
	ok1 = ok2 = 0;
	for(int i=0;i<l;i++)
	{
		if(i+1<l && !ok1 &&x[i]=='B' && x[i+1]=='A')
		{
			i+=1;
			ok1 = 1;
		}
		else if(i+1<l && ok1 && x[i]=='A' && x[i+1]=='B')
		{
			i+=1;
			ok2 =1;
		}
	}
	if(ok1 && ok2) ans2 = 1;
	if(ans1 || ans2) printf("YES\n");
	else printf("NO\n");
	return 0;
}