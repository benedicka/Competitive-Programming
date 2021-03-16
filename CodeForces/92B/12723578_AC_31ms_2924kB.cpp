#include<stdio.h>
#include<algorithm>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
using namespace std;
int main()
{
	char x[1000000];
	long length,ans,l;
	scanf("%s",&x);
	length = strlen(x);
	ans= 0;
	while (length!=1)
	{
		if (x[length-1]=='0')
		{
			while(x[length-1]=='0')
			{
			length--;
			x[length]='\0';
			ans++;
			}
		}
		else
		{
			l = length-1;
			while (x[l]=='1')
			{
				x[l]='0';
				
				l--;
				if (l==-1) 
				{
					x[l+1]='1';
					x[length] = '0';
					length++;
					x[length] = '\0';
					break;
				}
				if (x[l]=='0')
				{
					x[l]='1';
					break;
				}
			}
			ans+=1;
		}
	
	}
	printf("%lld\n",ans);
	return 0;
}