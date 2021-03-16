#include<stdio.h>
#include<string.h>
#include<map>
#include<string>
using namespace std;
int l,p,k,h,t,c;
char x[1010],y[4];
bool ok=1;
map < string , bool>mp;
int main()
{
	scanf("%s",&x);
	l =strlen(x);
	y[4] = '\0';
	
	p=k=h=t=13;
	for(int i=0;i<l;i+=3)
	{
		c = 0;
		for(int j=i;j<i+3;j++)
		{
			y[c] = x[j];
			c++;
		}
		if(mp[y]==0)
		{
			mp[y] = 1;
			if(y[0]=='P') p--;
			else if(y[0]=='K') k--;
			else if(y[0]=='H') h--;
			else if(y[0]=='T') t--;
		}
		else ok = 0;
	}
	if(ok)printf("%d %d %d %d\n",p,k,h,t);
	else printf("GRESKA\n");
	return 0;
}