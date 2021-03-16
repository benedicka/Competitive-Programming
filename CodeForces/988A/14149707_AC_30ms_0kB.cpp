#include<stdio.h>
#include<algorithm>
#include<map>
using namespace std;
int n,m,c,a[110],ans[110];
map < int , bool > mp;
int main()
{
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(!mp[a[i]])
		{
			if(c!=m) ans[c] = i+1;
			c++;
			mp[a[i]] = 1;
		}
	}	
	if(c<m) printf("NO\n");
	else
	{
		printf("YES\n");
		for(int i=0;i<m;i++)
		{
			printf("%d",ans[i]);
			if(i==c-1) printf("\n");
			else printf(" ");
		}
	}
	
	return 0;
}