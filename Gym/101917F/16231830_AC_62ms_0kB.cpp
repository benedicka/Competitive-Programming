#include<bits/stdc++.h>
using namespace std;
char x[7];
int a,b,t,ans,l;
int gcd(int a,int b)
{
	if(b==0) return a;
	gcd(b,a%b);
}
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",&x);
		if(strcmp(x,"0")==0) printf("1\n");
		else if(x[0] =='0')
		{
			l = strlen(x)-2;
			b = pow(10,l);
			a = 0;
			for(int i=2;i<l+2;i++)
			{
				a+=x[i]-'0';
				a*=10;
			}
			a/=10;
			ans = gcd(a,b);
			printf("%d\n",b/ans);
		}
		else printf("1\n");
	}
	return 0;
}