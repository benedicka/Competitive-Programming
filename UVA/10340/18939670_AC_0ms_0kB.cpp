#include<bits/stdc++.h>
using namespace std;
bool ok;
char x[100010],y[100010];
int lenx,leny,j;
int main()
{
	while(scanf("%s %s",&x,&y)!=EOF)
	{
		lenx = strlen(x);
		leny = strlen(y);
		
		ok = 1;
		j = 0;
		for(int i=0;i<lenx;i++)
		{
			bool find=0;
			while(j<leny)
			{
				if(y[j]==x[i])
				{
					find = 1;
					j++;
					break;
				}
				j++;
			}
			if(!find) 
			{
				ok = 0;
				break;
			}
		}
		printf("%s\n",ok?"Yes":"No");
	}
	return 0;
}