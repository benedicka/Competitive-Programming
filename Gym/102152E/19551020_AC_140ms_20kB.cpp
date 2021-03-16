#include<bits/stdc++.h>
using namespace std;
string x,c,y;
int t,ans,a[30],n,m;
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		
		cin>>n>>m>>x>>c>>y;
		ans = 0;
		memset(a,-1,sizeof(a));
		for(int i=0;i<n;i++)
		{
			if(a[x[i]-'a']==-1) a[x[i]-'a'] = x[i]-'0';
			a[x[i]-'a']=min((c[i]-'0'),a[x[i]-'a']);
		}
		for(int i=0;i<m;i++)
		{
			ans+=a[y[i]-'a'];
			if(a[y[i]-'a']<0) 
			{
				ans = -1;
				break;
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}