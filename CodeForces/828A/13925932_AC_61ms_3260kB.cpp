#include<stdio.h>
#include<string.h>
#include<map>
#include<algorithm>
using namespace std;
int n,k1,k2,k3,x,ans=0;

int main()
{
	scanf("%d %d %d",&n,&k1,&k2);
	k3 = 0;
	while(n--)
	{
		
		scanf("%d",&x);
		//printf("%d %d\n",k1,k2);
		//printf("%d %d %d\n",k1,k2,x);
		if(x==1)
		{
			if(k1>0) k1-=1;
			else if(k2>0) 
			{
				k2-=1;
				k3+=1;
			}
			else if(k3>0)
			{
				k3--;
			}
			else ans+=1;
		}
		else if(x==2)
		{
			if(k2>0) k2-=1;
			else ans+=2;
		}
		
	}
	printf("%d\n",ans);
	return 0;
}