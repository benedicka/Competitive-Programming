#include<stdio.h>
#include<map>
#include<utility>
using namespace std;
int t,n,mn,total,h1,h2,m1,m2;
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		total = 0;
		scanf("%d %d",&n,&mn);
		mn*=60;
		while(n--)
		{
			scanf("%d:%d %d:%d",&h1,&m1,&h2,&m2);
			if(total<mn)
			{
				m1+=h1*60;
				m2+=h2*60;
				total+=m2-m1;
			}
		}
		if(total>=mn) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}