#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n,a,b,s;
	cin>>n>>a>>b>>s;
	if((n==1 && a!=b) || (n==1 && s!=a)) cout<<"NO"<<endl;
	else
	{
		s-=(a+b);
		if(s==0 && n==2) cout<<"YES"<<endl;
		else if(s!=0 && n==2) cout<<"NO"<<endl;
		else
		{
			n-=2;
			if((double) s/n>b || (double) s/n<a) printf("NO\n");
			else printf("YES\n");
		}
	}
	return 0;
}