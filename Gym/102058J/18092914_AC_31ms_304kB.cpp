#include<bits/stdc++.h>
using namespace std;
double gradien[] = {-1,1},x[3010],y[3010],xpos,ypos,ymin,xmin;
int n,N,tmp,ans,l,mid,r;
bool ok(double ycek)
{
	double ytmp;
//	printf("%lf : \n",ycek);
	for(int i=1;i<N;i++)
	{
		if(x[i]>=xpos) break;
		ytmp = (x[i]*(ypos-ycek)+ ycek*xpos)/xpos ;
//		printf("%lf %lf\n",ytmp,y[i]);
		if(ytmp<y[i]) return 0;
	}
	return 1;
}
int main()
{
	scanf("%d",&n);
	N = 2*n;
	for(int i=0;i<N;i++)
	{
		scanf("%lf",&x[i]);
	}
	y[0] = 0;
	y[N] = 0;
	scanf("%lf",&xpos);
	for(int i=1;i<N;i++)
	{
		y[i] = gradien[i%2]*(x[i]-x[i-1]) + y[i-1];
	}
	x[N] =-1*(y[N]-y[N-1]) + x[N-1];
//	for(int i=0;i<=N;i++)
//	{
//		printf("titik : %.0lf %.0lf\n",x[i],y[i]);
//	}
	for(int i=1;i<N;i++)
	{
		l = x[i-1];
		r = x[i];
		if(l<=xpos && xpos<=r)
		{
			ypos = gradien[i%2]*(xpos-x[i])+y[i];
			break;
		}
	}
//	printf("%lf %lf\n", xpos, ypos);
	tmp = 0;
	l = 0;
	r = ans = 1e9;
	while(l<=r)
	{
//		printf("binser: %d %d\n",l,r);
		mid = (l+r)/2;
		if(ok(mid))
		{
			ans = min(ans,mid);
			r = mid-1;
		}
		else l = mid+1;
	}
	printf("%d\n",ans);
	return 0;
}