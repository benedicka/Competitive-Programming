#include<bits/stdc++.h>
using namespace std;
string x,ans,tmp;
int n;
string mini(string a,string b)
{
//	cout<<"mini "<<a<<" "<<b<<endl;
	for(int i=0;i<a.size();i++)
	{
		//printf("%d %d\n",a[i]-'0',b[i]-'0');
		if(a[i]==b[i]) continue;
		if(a[i]<b[i]) 
		{
			//cout<<"a"<<endl;
			return a;
		}
		else return b;
	}
	//cout<<"b"<<endl;
	return b;
}
string minim(string a)
{
	int cnt,idx;
	string res,temp;
	for(int i=0;i<a.size();i++)
	{
		res+='9';
	}
	for(int i=0;i<a.size();i++)
	{
		idx = i;
		cnt = 0;
		temp = "";
		while(cnt<a.size())
		{
			cnt++;
			temp+=a[idx];
			idx++;
			idx%=(a.size());
		}
	//	cout<<idx<<" "<<res<<" "<<temp<<" "<<mini(res,temp)<<endl;
		res = mini(temp,res);
	}
	return res;
}
string pluss(string a)
{
	string res="";
	for(int i=0;i<a.size();i++)
	{
		res+=((x[i]-'0'+1)%10+'0');
	}
//	cout<<res<<endl;
	return res;
}
int main()
{
	ans = "";
	scanf("%d",&n);
	cin>>x;
	for(int i=0;i<x.size();i++)
	{
		ans+='9';
	}
	for(int i=0;i<10;i++)
	{
		x = pluss(x);
	//	cout<<x<<" "<<minim(x)<<endl;
		ans = mini(ans,minim(x));
	}
	cout<<ans<<endl;
	return 0;
}