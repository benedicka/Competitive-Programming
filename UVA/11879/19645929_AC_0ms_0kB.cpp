#include<bits/stdc++.h>
using namespace std;
char x[110];
int len,sisa;
int main()
{
	while(scanf("%s",&x)!=EOF)
	{
		if(strcmp(x,"0")==0) break;
		len = strlen(x);
		sisa = 0;
		for(int i=0;i<len;i++)
		{
			sisa*=10;
			sisa+=(x[i]-'0');
			sisa%=17;
		}
		printf("%d\n",sisa?0:1);
	}
	return 0;
}