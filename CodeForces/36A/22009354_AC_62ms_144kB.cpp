#include<string>
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int idx = -1,diff = -1,l;
	bool ok=1;
	char x[110];
	scanf("%d",&l); getchar();
	scanf("%s",x);
	for(int i=0;i<l;i++)
	{
		if(x[i]=='1')
		{
			if(idx==-1) idx = i;
			else
			{
				if(diff==-1) diff = i-idx;
				else if(diff != i-idx) ok = 0;
				idx = i;
			}
		}
	}
	printf("%s\n",ok?"YES":"NO");
  	return 0;
}