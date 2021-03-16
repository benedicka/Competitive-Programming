#include<bits/stdc++.h>
using namespace std;
char input,x[1010];
vector < int > idx[30];
int ans,t,l;
int main()
{
    scanf("%d",&t);getchar();
    for(int tc=1;tc<=t;tc++)
    {
    	for(int i=0;i<30;i++)
    	{
    		idx[i].clear();
		}
		scanf("%s",&x);
		l = strlen(x);
		ans = INT_MAX;
		for(int i=0;i<l;i++)
		{
			for(int j=0;j<l;j++)
			{
				if(i!=j && x[i]==x[j])
				{
					ans = min(ans,abs(i-j));
				}
			}
		}
		if(ans==INT_MAX) printf("Case #%d: -1\n",tc);
		else printf("Case #%d: %d\n",tc,ans);
	}
    return 0;
}