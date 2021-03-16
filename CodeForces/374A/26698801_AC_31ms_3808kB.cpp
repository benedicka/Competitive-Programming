#include<bits/stdc++.h>
using namespace std;
long long n,m,posx,posy,a,b,ans,ujungx[5],ujungy[5];
const long long INF = 9223372036854775807; 
int main()
{
	ans = INF;
	scanf("%lld %lld %lld %lld %lld %lld",&n,&m,&posx,&posy,&a,&b);
	ujungx[0] = 1;ujungy[0] = m;
	ujungx[1] = n;ujungy[1] = 1;
	ujungx[2] = n;ujungy[2] = m;
	ujungx[3] = 1;ujungy[3] = 1;
	if((posx==1&&posy==1)||(posx==n&&posy==1)||(posx==1&&posy==m)||(posx==n&&posy==m))
	{
		ans = 0;
	}
	else if(a<n && b<m)
	{
		for(int i=0;i<4;i++)
		{
			if(abs(posx-ujungx[i])%a==0 && abs(posy-ujungy[i])%b==0&& ((abs(posx-ujungx[i])/a)%2 == (abs(posy-ujungy[i])/b)%2) )
			{
				ans=min(ans,max(abs(posx-ujungx[i])/a,abs(posy-ujungy[i])/b));
				//printf("%lld %lld\n",abs(posx-ujungx[i])/a,abs(posy-ujungy[i])/b);
			}
		}
	}

	if(ans!=INF) printf("%lld\n",ans);
	else printf("Poor Inna and pony!\n");
	return 0;
}