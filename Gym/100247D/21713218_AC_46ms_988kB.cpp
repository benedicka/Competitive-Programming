#include<bits/stdc++.h>
using namespace std;
int n,mn = INT_MAX,cnt[30],now;
char x[4][200010],ans[200010],a;
int main()
{
	scanf("%d",&n);
	scanf("%s %s %s",&x[0],&x[1],&x[2]);
	for(int j=0;j<n;j++)
	{
		now = 0;
		memset(cnt,0,sizeof(cnt));
		for(int i=0;i<3;i++)
		{
			cnt[x[i][j]-'a']++;
			if(cnt[x[i][j]-'a']>now)
			{
				now++;
				a = x[i][j];
			}
		}
		ans[j] = a;
	}
	
	printf("%s\n",ans);
	return 0;
}