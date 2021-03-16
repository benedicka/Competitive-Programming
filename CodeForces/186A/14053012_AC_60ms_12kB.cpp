#include<stdio.h>
#include<algorithm>
#include<string.h>
#include<utility>
using namespace std;
int main()
{
	pair < char , char > idx[3];
	int l1,l2,c=0;
	char x[100010],y[100010];
	scanf("%s %s",&x,&y);
	l1 = strlen(x);
	l2 = strlen(y);
	if(l1!=l2) printf("NO\n");
	else
	{
		for(int i=0;i<l1;i++)
		{
			if(c==3) break;
			if(x[i]!=y[i])
			{
				idx[c].first = x[i];
				idx[c].second = y[i];
				c++;
			}
		}
		if(c!=2 || idx[1].second!=idx[0].first || idx[1].first!=idx[0].second) printf("NO\n");
		else printf("YES\n");
	}
	return 0;
}