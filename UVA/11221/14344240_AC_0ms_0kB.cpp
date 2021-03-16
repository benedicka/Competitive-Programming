#include<iostream>
#include<string>
#include<math.h>
#include<ctype.h>
using namespace std;
int t,cnt,l,k;
string x,a,b;
bool ok = 1;
bool palindrome(string z)
{
	int r = z.size();
	r-=1;
	l = 0;
	while(l<r)
	{
		if(z[l]!=z[r]) return 0;
		l++;
		r--;
	}
	return 1;
}
int main()
{
	cin>>t;getchar();
	for(int tc=1;tc<=t;tc++)
	{
		a.clear();
		b.clear();
		cnt = 0;
		ok = 1;
		getline(cin,x);
		//cout<<x<<endl;
		l = x.size();
		for(int i=0;i<l;i++)
		{
			if(isalpha(x[i])) 
			{
				a+=x[i];
				cnt++;
			}
		}
		k = (int)sqrt(cnt);
		if(k*k!=cnt) ok = 0;
		else
		{
			for(int i=0;i<k;i++)
			{
				for(int j=i;j<cnt;j+=k)
				{
					b+=a[j];
				}
			}
		}
		cout<<"Case #"<<tc<<":"<<endl;
//		cout<<"A:"<<a<<endl;
//		cout<<"B:"<<b<<endl;
		if(!palindrome(a) || a!=b || !palindrome(b)) ok = 0;
		if(!ok) cout<<"No magic :("<<endl;
		else cout<<k<<endl;
	}
	return 0;
}