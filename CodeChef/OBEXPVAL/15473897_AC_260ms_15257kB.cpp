#include<bits/stdc++.h>
using namespace std;
int t,n;
double e,ans[1010],z,x[1010],mn,mx,p1,p2;
int idx_mn,idx_mx;
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %lf",&n,&e);
		memset(ans,0,sizeof(ans));
		for(int i=0;i<n;i++)
		{
			scanf("%lf",&x[i]);
			if(i==0)
			{
				mn = x[i];
				mx = x[i];
				idx_mn = i;
				idx_mx = i;
			}
			if(x[i]<mn)
			{
				mn = x[i];
				idx_mn = i;
			}
			else if(x[i]>mx)
			{
				mx = x[i];
				idx_mx = i;
			}
		}
		if((mn==mx && mn!=e) || mx<e || mn>e) printf("-1\n");
		else
		{
			if(mn==mx)
			{
				ans[idx_mn] = 1;
				for(int i=0;i<n;i++)
				{
					if(i!=0) printf(" ");
					printf("%.10lf",ans[i]);
				}
				printf("\n");
			}
			else
			{
				p1 = (e-mn)/(mx-mn);
				p2 = 1-p1;
				ans[idx_mx] = p1;
				ans[idx_mn] = p2;
				for(int i=0;i<n;i++)
				{
					if(i!=0) printf(" ");
					printf("%.10lf",ans[i]);
				}
				printf("\n");
			}
			
		}
		
	}
	return 0;
}