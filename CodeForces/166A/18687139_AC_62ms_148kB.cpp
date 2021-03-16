#include<bits/stdc++.h>
using namespace std;
int n,k,p,t,ans;
pair < int , int > x[60];
map < pair < int , int > , int > mp;
bool cmp(pair < int , int > a , pair < int, int > b)
{
	int s1,s2,p1,p2;
	s1 = a.first;
	s2 = b.first;
	p1 = a.second;
	p2 = b.second;
	if(s1!=s2) return s1>s2;
	else
	{
		return p1<=p2;
	}
}
int main()
{
	scanf("%d %d",&n,&k);
	for(int i=0;i<n;i++)
	{
		scanf("%d %d",&p,&t);
		x[i] = make_pair(p,t);
		mp[x[i]]++;
	}
	sort(x,x+n,cmp);
	printf("%d\n",mp[x[k-1]]);
	return 0;
}