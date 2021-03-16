#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;
void jumlah (char x[],char y[])
{
	char ans[10000];
	int l1,l2,l3,c,t;
	l1 = strlen(x);
	l2 = strlen (y);
	l3 = max(l1,l2);
	l1--;
	l2--;
	c = 0;
	for (int i=l3;i>=0;i--)
	{
		t = (x[l1]-'0')+(y[l2]-'0')+c;
		ans [i] = t%10 +'0';
		if (t>9) c=1;
		else c=0;
		l1--;
		l2--;
		if(l1<0)
		{
			l1 = 0;
			x[l1] = '0';
		}
		if(l2<0)
		{
			l2 = 0;
			y[l2] = '0';
		}
	}	
	for (int i=0;i<=l3;i++)
	{
		if (i==0 && ans[i]=='0') i++;
		printf("%c",ans[i]);
	}
}
int main()
{
	char x[10000],y[10000];
	scanf("%s %s",x,y);
	jumlah (x,y);
	return 0;
}