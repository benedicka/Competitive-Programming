#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
	int s,a=0,b=0,c=0;
	char x[5010],y[5010];
	scanf("%s",&x);
	strcpy(y,x);
	s = strlen(y);
	sort(y,y+s);
	if(strcmp(x,y)!=0) printf("NO\n");
	else
	{
		for(int i=0;i<s;i++)
		{
			if(x[i]=='a') a++;
			else if(x[i]=='b') b++;
			else c++;
		}
		if((a==c || b==c) &&a!=0 && b!=0) printf("YES\n");
		else printf("NO\n");
	}
	
	return 0;
}