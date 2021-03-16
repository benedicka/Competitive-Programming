#include<bits/stdc++.h>
using namespace std;
map<char , double > price;
long long t,n,len,l;
double ans,z;
char a;
string x;
int main()
{
	scanf("%lld",&t);getchar();
	while(t--)
	{
		scanf("%lld",&l);getchar();
		price.clear();
		ans = 0;
		while(l--)
		{
			a = getchar();
			getchar();
			scanf("%lf\n",&z);
		//	printf("%c %lf\n",a,z);
			price[a] = z;
		}
		scanf("%lld",&l);getchar();
		while(l--)
		{
			getline(cin,x);
			//cout<<x<<endl;
			len = x.size();
			for(int i=0;i<len;i++)
			{
				ans+=price[x[i]];
			}
		}
		printf("%.2lf$\n",ans/100);
	}
	return 0;
}