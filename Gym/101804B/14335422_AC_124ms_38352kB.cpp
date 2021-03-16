#include<stdio.h>
#include<string>
#include<algorithm>
#include<utility>
#include<iostream>
#include<vector>
using namespace std;
pair < double , string > item[2010];
int kit,m,n;
pair < int , double > jum[2010];
double x,sum;
vector < string > ans[2010];
void getans()
{
	for(int i=0;i<=2000;i++)
	{
		jum[i].first = 1e5;
		jum[i].second = 0;
	}
	jum[0].first= 0;
	for(int i=0;i<m;i++)
	{
		for(int j=2000;j>=0;j--)
		{
			double sisa = jum[j+(int)item[i].first].second;
			if(j+item[i].first<=2000 && sisa==0 && jum[j].first+1<1e5)
			{
				for(int k=0;k<ans[j].size();k++)
				{
					ans[j+(int)item[i].first].push_back(ans[j][k]);
				}
				ans[j+(int)item[i].first].push_back(item[i].second);
				jum[j+(int)item[i].first].first= jum[j].first+1;
				jum[j+(int)item[i].first].second+=item[i].first;
			}
		}
	}

}
int main()
{
	sum = 0;
	scanf("%d %d",&kit,&m);
	for(int i=0;i<m;i++)
	{
		cin>>item[i].second>>item[i].first;
		sum+=item[i].first;
	}
	scanf("%d",&n);
	sort(item,item+m);
	getans();
	for(int i=0;i<n;i++)
	{
		scanf("%lf",&x);
		x = x/2-kit;
		if(x==0) printf("0\n");
		else if(sum<x) printf("-1\n");
		else
		{
			for(int i=x;i<=2000;i++)
			{
				//cout<<i<<" "<<jum[i]<<endl;
				if((double) i >= x && jum[i].first!=1e5)
				{	
					cout<<jum[i].first<<" ";
					for(int j=0;j<jum[i].first;j++)
					{
						cout << ans[i][j];
						if(j<jum[i].first-1) cout<<" ";
						else cout<<"\n";
					}
					break;
				}
			}
		}
	}
	return 0;
}