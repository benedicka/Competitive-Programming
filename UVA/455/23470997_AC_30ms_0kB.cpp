#include<bits/stdc++.h>
using namespace std;
int t,l,idx,i,j,ans;
bool ok;
char a[100010];
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",&a);
		l = strlen(a);
		ans = l;
		for(i=1;i<=l;i++)
		{
			if(l%i==0)
			{
				bool ok = 1;
				for(int j=0;j<l;j++)
				{
					if(a[j]!=a[j%i])
					{
						ok = 0;
						break;
					}
				}
				if(ok)
				{
					ans = i;
					break;
			 	} 
			}
		}
		printf("%d\n",ans);
		if(t) printf("\n");
	}
	return 0;
}