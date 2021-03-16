#include<bits/stdc++.h>
using namespace std;
int primelist[1000010],cnt,x,ans;
bool num[1000010];
void pre()
{
	num[0] = num[1] = 1;
	for(int i=2;i*i<=1000000;i++)
	{
		for(int j=i*i;j<=1000000;j+=i)
		{
			if(!num[j])
			{
				num[j] = 1;
			}
		}
	}
	primelist[cnt++] = 2;
	for(int i=3;i<=1000000;i+=2)
	{
		if(!num[i]) primelist[cnt++] = i;
	}	
}
int main()
{
	pre();
	scanf("%d",&x);
	while(x>=4)
	{
		ans++;
		for(int i=0;i<cnt;i++)
		{
			if(!num[x-primelist[i]])
			{
				x = x-2*primelist[i];
				break;
			}
		}
	}
	printf("%d\n",ans);
	return 0;
}
	