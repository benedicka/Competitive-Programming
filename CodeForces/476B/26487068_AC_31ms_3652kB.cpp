#include<bits/stdc++.h>
using namespace std;
int len,cntpx,cntmx,jum,cntpy,cntmy,difp,difm;
char x[12],y[12];
double ans;
int fact(int a)
{
	int res = 1;
	for(int i=2;i<=a;i++)
	{
		res*=i;
	}
	return res;
}
int c(int a,int b)
{
	return (fact(a))/(fact(b)*fact(a-b));
}
int main()
{
	scanf("%s %s",x,y);
	len = strlen(x);
	for(int i=0;i<len;i++)
	{
		if(x[i]=='+') cntpx++;
		else if(x[i]=='-') cntmx++;
		
		if(y[i]=='+') cntpy++;
		else if(y[i]=='-') cntmy++;
		else jum++;
	}
	if(cntpx==cntpy && cntmx==cntmy) printf("%lf\n",1.0);
	else if(cntpy>cntpx || cntmy>cntmx) printf("%lf\n",0.0);
	else
	{
		difp = cntpx-cntpy;
		difm = cntmx-cntmy;
		if(difp+difm!=jum) printf("%lf\n",0.0);
		else
		{
			printf("%.10lf\n",((double)c(jum,difp)*c(jum-difp,difm))/((double)pow(2,jum)));
		}
	}
	return 0;
}