#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<iostream>
using namespace std;
char x[1000010];
int a,t,b,l;
double ans;
int main()
{
	scanf("%d",&t);
	for(int tc=1;tc<=t;tc++)
	{
		ans = 0;
		b = 0;
		scanf("%d %[^\n]%*c",&a,&x);
		l = strlen(x);
		for(int i=0;i<l;i++)
		{
			if(isdigit(x[i]))
			{
				if(b==0)b+=(x[i]-'0');
				else
				{
					b*=10;
					b+=(x[i]-'0');
				}
			}
		}
		ans = (a*0.5)+(b*0.05);
		printf("Case %d: ",tc);
		cout<<ans<<endl;
	}
	return 0;
}