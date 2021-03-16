#include<bits/stdc++.h>
using namespace std;
bool ok;
string x;
pair < long long ,string > p[10010];
long long z,d,cnt,k,jum,tot;
int n;
int main()
{
	scanf("%d %lld %lld",&n,&d,&k);
	for(int i=0;i<n;i++)
	{
		cin>>x>>z;
		p[i] = make_pair(-z,x);
	}
	sort(p,p+n);
	for(int i=0;i<n;i++)
	{
		tot-=p[i].first;
		jum++;
		if(jum==k || tot>=d) break;
	}
	if(tot<d) cout<<"impossible"<<endl;
	else
	{
		cout<<jum<<endl;
		for(int i=0;i<jum;i++)
		{
			cout<<p[i].second<<", YOU ARE FIRED!"<<endl;
		}
	}
	return 0;
}