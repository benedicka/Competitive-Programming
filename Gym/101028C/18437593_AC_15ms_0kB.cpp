#include<bits/stdc++.h>
using namespace std;
char a[110],c[110];
int ans,t,n;
bool ok;
int main()
{

	scanf("%d",&t);
	while(t--)
	{
			scanf("%d",&n);
			ans = 1;
			ok = 1;
			scanf("%s",&a);
			scanf("%s",&c);
			for(int i=0;i<n;i++)
			{
				ans%=(1000000007);
				if(a[i]==c[i] && a[i]=='1') ans*=2;
				else
				{
					if(a[i]=='1' && c[i]=='0')
					{
						ok = 0;
						break;
					}
				}
			}
			if(!ok) printf("IMPOSSIBLE\n");
			else
			{
				printf("%d\n",ans%1000000007);
			}
		
	}
	return 0;
}