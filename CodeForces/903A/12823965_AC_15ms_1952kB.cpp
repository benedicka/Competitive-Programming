#include<stdio.h>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{
	int n,a,cek,c;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&a);
		cek = 0;
		c = a;
		if(a%3==0 || a%7==0) cek = 1;
		else
		{
			while(a%3!=0 && a>7)
			{
				a-=7;
				if(a%3==0) cek = 1;
			}
			a = c;
			while(a%7!=0 && a>3)
			{
				if(cek==1) break;
				a-=3;
				if(a%7==0) cek = 1;
			}
		}
		if(cek==1) printf("YES\n");
		else if(cek==0) printf("NO\n");
	}
	return 0;
}