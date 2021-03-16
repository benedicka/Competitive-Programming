#include<bits/stdc++.h>
using namespace std;
int n,m,x,l[110][110],ans;

int main()
{
	scanf("%d %d %d",&n,&m,&x);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			scanf("%d",&l[i][j]);
		//	printf("%d %d\n",l[i][j],__gcd(l[i][j],x));
			if(__gcd(l[i][j],x)>1) ans++;
		}	
	}	
	printf("%d\n",ans);
	return 0;
}