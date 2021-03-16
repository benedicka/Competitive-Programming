#include<string>
#include<iostream>
using namespace std;
int l,n;
string a,b;

int main()
{
	cin>>n;
	while(n--)
	{
		a.clear();
		b.clear();
		cin>>a;
		cin>>b;
		if(a.size()!=b.size()) cout<<"No"<<endl;
		else
		{
			l = a.size();
			for(int i=0;i<l;i++)
			{
				if(a[i]=='a' || a[i]=='i'||a[i]=='u'||a[i]=='e' || a[i]=='o') a[i] = '.';
			}
			for(int i=0;i<l;i++)
			{
				if(b[i]=='a' || b[i]=='i'||b[i]=='u'||b[i]=='e' || b[i]=='o') b[i] = '.';
			}
			if(a==b) cout<<"Yes"<<endl;
			else cout<<"No"<<endl;
		}
	}
	return 0;
}