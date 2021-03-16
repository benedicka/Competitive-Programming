#include<bits/stdc++.h>
using namespace std;
int x[5][5],a,ans[10][10],done[10][10];
int main()
{
    for(int i=0;i<4;i++)
    {
    	for(int j=0;j<4;j++)
    	{
    		scanf("%d",&x[i][j]);
    		ans[i][j] = 0;
    		done[i][j] = 0;
		}
	}
	scanf("%d",&a);
	if(a==0)
	{
		for(int i=0;i<4;i++)
	    {
	    	for(int j=1;j<4;j++)
	    	{
	    		if(x[i][j]==0) continue;
	    		else
	    		{
	    			int idx,v;
	    			v = x[i][j];
	    			idx = j;
	    			while(idx>=0)
	    			{
	    				if(idx-1>=0 && done[i][idx-1])
						{
							x[i][j] = 0;
							x[i][idx]+=v;
							break;
						}
						if(idx-1>=0 && x[i][idx-1]==v)
						{
							x[i][j] = 0;
							done[i][idx-1] = 1;
							x[i][idx-1]+=v;
							break;
						}
						if((idx-1>=0 && (x[i][idx-1]!=0) ) || idx-1==-1)
						{
							x[i][j] = 0;
							x[i][idx]+=v;
							break;
						}
	    				idx--;
					}
				}
			}
		}
	}
	else if(a==1)
	{
		for(int j=0;j<4;j++)
	    {
	    	for(int i=1;i<4;i++)
	    	{
	    		if(x[i][j]==0) continue;
	    		else
	    		{
	    			int idx,v;
	    			v = x[i][j];
	    			idx = i;
	    			while(idx>=0)
	    			{
	    				if(idx-1>=0 && done[idx-1][j])
						{
							x[i][j] = 0;
							x[idx][j]+=v;
							break;
						}
						if(idx-1>=0 && x[idx-1][j]==v)
						{
							x[i][j] = 0;
							done[idx-1][j] = 1;
							x[idx-1][j]+=v;
							break;
						}
						if((idx-1>=0 && x[idx-1][j]!=0) || idx-1==-1)
						{
							x[i][j] = 0;
							
							x[idx][j]+=v;
							break;
						}
	    				idx--;
					}
				}
			}
		}
	}
	else if(a==2)
	{
		for(int i=0;i<4;i++)
	    {
	    	for(int j=2;j>=0;j--)
	    	{
	    		if(x[i][j]==0) continue;
	    		else
	    		{
	    			int idx,v;
	    			v = x[i][j];
	    			idx = j;
	    			while(idx<4)
	    			{
	    				if(idx+1<4 && done[i][idx+1])
						{
							x[i][j] = 0;
							x[i][idx]+=v;
							break;
						}
						if(idx+1<4 && x[i][idx+1]==v)
						{
							x[i][j] = 0;
							done[i][idx+1] = 1;
							x[i][idx+1]+=v;
							break;
						}
						if((idx+1<4 && x[i][idx+1]!=0) || idx+1==4)
						{
							x[i][j] = 0;
							x[i][idx]+=v;
							break;
						}
	    				idx++;
					}
				}
			}
		}
	}
	else
	{
		for(int j=0;j<4;j++)
	    {
	    	for(int i=3;i>=0;i--)
	    	{
	    		if(x[i][j]==0) continue;
	    		else
	    		{
	    			int idx,v;
	    			v = x[i][j];
	    			idx = i;
	    			while(idx<4)
	    			{
	    				if(idx+1<4 && done[idx+1][j])
						{
							x[i][j] = 0;
							x[idx][j]+=v;
							break;
						}
						if(idx+1<4 && x[idx+1][j]==v)
						{
							x[i][j] = 0;
							done[idx+1][j] = 1;
							x[idx+1][j]+=v;
							break;
						}
						if((idx+1<4 && x[idx+1][j]!=0) || idx+1==4)
						{
							x[i][j] = 0;
							x[idx][j]+=v;
							break;
						}
	    				idx++;
					}
				}
			}
		}
	}
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			if(j!=0) printf(" ");
			printf("%d",x[i][j]);
		}
		printf("\n");
	}
    return 0;
}