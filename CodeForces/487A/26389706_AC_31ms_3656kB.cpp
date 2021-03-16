#include<bits/stdc++.h>
using namespace std;
int hj,aj,dj,he,ae,de,h,a,d,ans,mxa,mxd,hp,atk,def;
int cost(int _a,int _b, int _c)
{
	return (_a-hj)*h+(_b-aj)*a+(_c-dj)*d;
}
bool ok(int _hp)
{
	int res1,res2;
	if(ae-def<=0) res1 = INT_MAX;
	else res1 = _hp/(ae-def)+(_hp%(ae-def)!=0);
	if(atk-de<=0) res2 = INT_MAX;
	else res2 = he/(atk-de)+(he%(atk-de)!=0);
	//if(_hp==2 &&atk==2&&def==1)printf("c = %d %d \n%d %d %d\n%d %d %d\n",res1,res2,_hp,atk,def,he,ae,de);
	return res2<res1;
}
int main()
{
	scanf("%d %d %d",&hj,&aj,&dj);
	scanf("%d %d %d",&he,&ae,&de);
	scanf("%d %d %d",&h,&a,&d);
	ans = INT_MAX;
	
	for(int i=aj;i<=200;i++)
	{
		for(int j=dj;j<=100;j++)
		{
			atk = i;
			def = j;
			hp = 1000000;
			int l=hj,m,r=1000000;
			while(l<=r)
			{
				m = (l+r)/2;
			//	printf("%d %d %d\n",l,m,r);
				if(ok(m))
				{
					hp = min(hp,m);
					r = m-1;
				}
				else l = m+1;
			}
			//printf("hp = %d , atk = %d , def = %d\n",hp,atk,def);
			
			if(ans>cost(hp,atk,def))
			{
				//printf("%d\n",ok(hp));
				ans = cost(hp,atk,def);
				//printf("%d %d %d\n",hp,atk,def);
			}
		}
	}
	printf("%d\n",ans);
	return 0;
}