#include<bits/stdc++.h>
using namespace std;
int n,l,r,ans;

int main()
{
	scanf("%d",&n);
	fflush(stdin);
	l = 1;
	r = n;
	for(int i=2;i<n;i++)
	{
		printf("? %d %d %d\n",l,r,i);
		fflush(stdout);
		scanf("%d",&ans);
		fflush(stdin);
		if(ans)
		{
			r = i;
		}
	}
	printf("! %d\n",r);
	fflush(stdout);
	return 0;
}