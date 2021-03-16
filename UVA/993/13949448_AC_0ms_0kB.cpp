#include<stdio.h>
#include<string>
#include<iostream>
#include<algorithm>
using namespace std;
string ans;
int n,c;
char x;
long long a;
char z[110];
int main()
{
	scanf("%d",&n);
	while(n--)
	{
		scanf("%lld",&a);
		if(a<10) printf("%lld\n",a);
		else
		{
			c = 0;
			for(int i=9;i>=2;i--)
			{
				while(a%i==0)
				{
					a/=i;
					z[c] = i+'0';
					c++;
				}
			}
			z[c] = '\0';
			sort(z,z+c);
			if(a==1) printf("%s\n",z);
			else printf("-1\n");
		}
	}
	return 0;
}