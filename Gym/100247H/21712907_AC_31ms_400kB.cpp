#include<bits/stdc++.h>
using namespace std;
int n,ans;
char x[200010],y[200010];

int main()
{
	scanf("%d",&n);
	scanf("%s %s",&x,&y);
	for(int i=0;i<n;i++)
	{
		while(x[i]!=y[i])
		{
			i++;
			if(x[i]==y[i])
			{
				i--;
				ans++;
				break;
			}
		}
	}
	printf("%d\n",ans);
	return 0;
}