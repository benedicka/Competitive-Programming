#include <bits/stdc++.h>
using namespace std;
int n,x[2010],ans,tmp1,tmp2;

int main()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
		x[i] = abs(x[i]);
	}
	for(int i=0;i<n;i++)
	{
		tmp1 = tmp2 = 0;
        for(int j=0;j<i;j++)
		{
            if(abs(x[j])<abs(x[i]))tmp1++;
        }
        for(int j=i+1;j<n;j++)
		{
            if(abs(x[i])>abs(x[j]))tmp2++;
        }
        if(tmp2>tmp1) x[i]*=-1;
        //printf("%d ",x[i]);
    }
    for(int i=0;i<n;i++)
	{
        for(int j=0;j<i;j++)
		{
            if(x[j]>x[i])ans++;
        }
    }
    printf("%d\n",ans);
	return 0;
}