#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<ctype.h>
using namespace std;
int n,l,jum,cek,a[11000],ans;
char x[10010000];
int gcd(int a, int b)
{
	if(b==0) return a;
	gcd(b,a%b);
}
int main()
{
	scanf("%d",&n);getchar();
	while(n--)
	{
		x[0] = '\0';
		scanf("%[^\n]%*c",x);
		l = strlen(x);
		ans = jum = cek = 0;
		for(int i=0;i<l;i++)
		{
			if(isdigit(x[i]))
			{
				while(isdigit(x[i]))
				{
					cek+=(x[i]-'0');
					cek*=10;
					i++;
				}
				a[jum] = cek/10;
				jum++;
				cek = 0;
				i--;
			}
		}
		if(cek!=0)
		{
			a[jum] = cek/10;
			jum++;
		}
		
		for(int i=0;i<jum;i++)
		{
			for(int j=0;j<jum;j++)
			{
				if(i!=j)ans = max(ans,gcd(a[i],a[j]));
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}