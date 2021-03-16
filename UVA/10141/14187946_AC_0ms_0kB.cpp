#include<stdio.h>
#include<string>
#include<algorithm>
#include<iostream>
using namespace std;
string s,ans,nama;
int n,p,meetreq,cnt,tc=1,mx;
double price,mprice;
int main()
{
	while(scanf("%d %d",&n,&p)!=EOF)
	{
	
		if(n==0 && p==0) break;
		getchar();
		if(tc!=1) cout<<endl;
		mx = 0;
		while(n--)
		{
			getline(cin,s);
		}
		while(p--)
		{
			getline(cin,nama);
			scanf("%lf %d",&price,&meetreq);
			if(meetreq>mx)
			{
				mx = meetreq;
				mprice = price;
				ans = nama;
			}
			else if(meetreq==mx && price<mprice)
			{
				mx = meetreq;
				mprice = price;
				ans = nama;
			}
			for(int i=0;i<=meetreq;i++)
			{
				getline(cin,s);
			}
		}
		printf("RFP #%d\n",tc);
		cout<<ans<<endl;
		tc++;
	}
	return 0;
}