#include<bits/stdc++.h>
using namespace std;
int l,cnt;
char x[110];
int main()
{
	scanf("%d",&l);
	scanf("%s",&x);
	for(int i=0;i<l;i++)
	{
		if(x[i]=='8') cnt++;
	}
	printf("%d\n",min(l/11,cnt));
	return 0;
}