#include<stdio.h>
#include<string.h>
#include<string>
#include<map>
#include<iostream>
using namespace std;
double payment,loan,x,perbulan,currloan,currp;
int n,d,m,ans;
double down[110];
int main()
{
	while(scanf("%d %lf %lf %d",&n,&payment,&loan,&d)!=EOF)
	{
		if(n<=0) break;
		for(int i=0;i<d;i++)
		{
			scanf("%d %lf",&m,&x);
			for(int i=m;i<=100;i++)
			{
				down[i] = x;
			}
		}
		ans = 0;
		perbulan =loan/n;
		currloan = loan;
		currp = (loan+payment)*(1-down[0]);
		//printf("%lf %lf %lf\n",perbulan,currloan,currp);
		while(currp<currloan)
		{
			ans+=1;
			currloan-=perbulan;
			currp*=(1-down[ans]);
		}
		printf("%d month",ans);
		if(ans!=1) printf("s");
		printf("\n");
	}	
	return 0;
}