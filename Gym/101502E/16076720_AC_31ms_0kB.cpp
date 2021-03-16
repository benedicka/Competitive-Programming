#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,b,l,k;
	char x[60];
	scanf("%d",&t);
	for(int tc=0;tc<t;tc++)
	{
		scanf("%d",&n);
		b = l = k = 0;
		for(int i=0;i<n;i++)
		{
			scanf("%s",&x);
			if(x[0]=='b') b++;
			else if(x[0]=='l') l++;
			else k++;
		}
		b/=2;
		printf("%d\n",min(b,min(l,k)));
	}
	return 0;
}