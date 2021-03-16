#include<stdio.h>
#define n 100000
int N = 1,primelist[100000];
bool num[100001];
void prime()
{
	for(int i=0;i<n;i++)
	{
		num[i] = 1;
	}
	num[0] = 0;
	num[1] = 0;
	for(int i=3;i*i<n;i+=2)
	{
		if(num[i]==1)
		{
			for(int j=i*i;j<n;j+=i)
			{
				num[j] = 0;
			}
		}
	}
	primelist[0] = 2;
	for(int i=3;i<n;i+=2)
	{
		if(num[i]==1)
		{
			primelist[N] = i;
			N++;
		}
	}
}



int main()
{
	prime();
	int x,y,d,c,ans[10];
	while(scanf("%d %d",&x,&y)!=EOF)
	{
		if(x==0 && y==0) break;
		if(y<x)
		{
			int swap;
			swap = x;
			x = y;
			y = swap;
		}
		
		for(int i=0;i<N;i++)
		{
			if(primelist[i]>y) break;
			if(primelist[i]>=x && primelist [i+2]<=y )
			{
				c = 0;
				d = primelist[i+1] - primelist[i];
				if (primelist[i+1]==primelist[i]+d && primelist[i+2]==primelist[i]+d+d)
				{
					if(primelist[i-1]!=primelist[i]-d)
					{
						c=3;
						ans[0] = primelist[i];
						i++;
						ans[1] = primelist[i];
						i++;
						ans[2] = primelist[i];
						while(primelist[i+1]==primelist[i]+d)
						{
							ans[c] = primelist[i+1];
					    	i++;
					   
					    	if(ans[c]>y)
					    	{
					    		c = 0;
					    		break;
							}
							c++;
						}
						i--;
					}
					
				}
				for(int j=0;j<c;j++)
				{
					printf("%d",ans[j]);
					if(j<c-1) printf(" ");
					else printf("\n");
				}
				
			}
			
		}
	
	}
	
	
	return 0;
}