#include <stdio.h>
#include <algorithm>
using namespace std;
bool flag[20],fnd;
int idx,t,cd[20],sum = 0,ans[20],c=0,n;
void f(int idx,int cek)
{
	if(fnd==1) return;
	if(idx==n)
	{
		if(cek>t) return;
		if(cek<=t)
		{
			if(cek>sum)
			{
				sum = cek;
				c = 0;
				for(int i=0;i<n;i++)
				{
					if(flag[i]==1) 
					{
					//printf("%d ",cd[i]);
					ans[c] = cd[i];
					c++;
					}
				}
			//printf("\n");
			}
			
			if(sum == t) fnd = 1;
		}
		return;
	}
	flag[idx] = 0;
	f(idx+1,cek);
	flag[idx] = 1;
	f(idx+1,cek+cd[idx]);
	flag[idx] = 0;
	return ;
}

int main()
{

	while(scanf("%d %d",&t,&n)!=EOF)
	{
		for(int i=0;i<n;i++)
		{
			scanf("%d",&cd[i]);
		}
	
		fnd = 0;
		c = 0;
		sum = 0;
		f(0,0);
		//printf("a");
		for(int i=0;i<c;i++)
		{
			printf("%d ",ans[i]);
		}
		printf("sum:%d\n",sum);
	}

	
	
	
	return 0;
}