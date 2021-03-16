#include<bits/stdc++.h>
using namespace std;
int n,m,idx,ans,a,b,r1,r2;
map < int , int > mp;
int main()
{
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&idx);
		mp[idx] = i+1;
	}
	for(int i=0;i<m;i++)
	{
		scanf("%d %d",&a,&b);
		if(a>b) swap(a,b);
		r1 = abs(mp[a]-mp[b])-1;
		if(r1 == n-2) r2 = 0;
		else if(r1==0) r2 = n-2;
		else r2 = n - r1-2;
		if(r1%2!=0 || r2%2!=0) ans++;
	}
	printf("%d\n",ans);
	return 0;
}