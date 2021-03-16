#include<bits/stdc++.h>
using namespace std;
string x[110],ansl[110],ansr[110];
int n,m,idxl,idxr,palin=-1;
map < string , int > ada;
string rev(string a)
{
	string res="";
	for(int i=m-1;i>=0;i--)
	{
		res+=a[i];
	}
	return res;
}
bool ispalin(string a)
{
	int l = 0, r = m-1;
	while(l<r)
	{
		if(a[l]!=a[r]) return 0;
		l++;
		r--;
	}
	return 1;
}
int main()
{
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++) 
	{
		cin>>x[i];
		if(ispalin(x[i]))
		{
			palin = i;
		}
		else ada[x[i]]++;
	}
	for(int i=0;i<n;i++)
	{
		if(ada[rev(x[i])] && ada[x[i]])
		{
			ada[rev(x[i])]--;
			ada[x[i]]--;
			ansl[idxl++] = x[i];
			ansr[idxr++] = rev(x[i]);
		}
	}
	if(palin!=-1) ansl[idxl++] = x[palin];
	printf("%d\n",(idxl+idxr)*m);
	for(int i=0;i<idxl;i++)
	{
		cout<<ansl[i];
	}
	for(int i=idxr-1;i>=0;i--)
	{
		cout<<ansr[i];
	}
	cout<<'\n';
	return 0;
}