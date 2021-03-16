#include<bits/stdc++.h>
using namespace std;
int n;
double ans,h,w[100010],l[100010],tmp;
int main()
{
	scanf("%d %lf",&n,&h);
	for(int i=0;i<n;i++) scanf("%lf",&w[i]);
	for(int i=0;i<n;i++) scanf("%lf",&l[i]);
	for(int i=0;i<n;i++)
	{
		tmp = w[i]-(l[i] *0.25)-h;
	//	printf("cek = %lf\n",tmp);
		ans = max(ans,tmp);
	}
	printf("%.0lf",ceil(ans));
	return 0;
}