#include<bits/stdc++.h>
using namespace std;
char x[100010],y[100010];
int cntx[27],cnty[27],ans,t,lenx,leny;

int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s %s",x,y);
		memset(cntx,0,sizeof(cntx));
		memset(cnty,0,sizeof(cnty));
		lenx = strlen(x);
		leny = strlen(y);
		ans = 0;
		for(int i=0;i<leny;i++)
		{
			cnty[y[i]-'a']++;
		}
		for(int i=0;i<lenx;i++)
		{
			if(!cnty[x[i]-'a']) break;
			cnty[x[i]-'a']--;
			ans++;
		}
		printf("%d\n",ans);
	}
	return 0;
}