#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
	bool ok=1;
	int s,a=0,b=0,c=0;
	char x[5010];
	scanf("%s",&x);
	s = strlen(x);
	for(int i=0;i<s;i++)
	{
		if(ok==0) break;
		if(x[i]=='a')
		{
			a++;
			if(b!= 0 || c!=0) ok = 0;
		}
		else if(x[i]=='b')
		{
			b++;
			if(c!=0) ok = 0;
		}
		else
		{
			c++;
		}
	}
	if(b!=c && a!=c || (a==0) || b==0) ok = 0;
	if(ok) printf("YES\n");
	else printf("NO\n");
	return 0;
}