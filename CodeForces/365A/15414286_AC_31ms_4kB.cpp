#include<stdio.h>
#include<math.h>
#include<string.h>
#include<map>
#include<iostream>
#include<algorithm>
using namespace std;
int n,k,ans,l;
char a[20];
bool ok;
int main()
{
	scanf("%d %d",&n,&k);
	while(n--)
	{
		scanf("%s",&a);
		ok = 1;
		for(int i=0;i<=k;i++)
		{
			char z[2] ;
			z[0] =  i+'0';
			z[1] = '\0';
			if(strstr(a,z)) continue;
			else
			{
				ok = 0;
				break;
			}
		}
		if(ok) ans++;
	}
	printf("%d\n",ans);
	return 0;
}