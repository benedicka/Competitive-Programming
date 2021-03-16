#include<bits/stdc++.h>
using namespace std;
int x[5],y[5];
bool found = 0;
bool ok()
{
	double prob;
	int win=0,cnt = 0,sum1=0,sum2=0;
	for(int i=0;i<3;i++)
	{
		sum1+=x[i];
		sum2 = 0;
		for(int j=0;j<3;j++)
		{
			if(x[i]>y[j]) win++;
			if(x[i]==y[j]) return 0;
			sum2+=y[j];
		}
	}
	if(sum2>=sum1) return 0;
	if(win<=4) return 0;
	win = 0;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(i==j) continue;
			for(int k=0;k<3;k++)
			{
				for(int l=0;l<3;l++)
				{
					if(k==l) continue;
					if(x[i]+x[j]==y[k]+y[l]) return 0;
					if(x[i]+x[j]>y[k]+y[l]) win++;
					cnt++;
				}
			}
		}
	}
	if(win>=cnt/2) return 0;
	return 1;
}
int main()
{
	for(int a=1;a<=10;a++)
	{
		for(int b=1;b<=10;b++)
		{
			for(int c=1;c<=10;c++)
			{
				for(int d=1;d<=10;d++)
				{
					for(int e=1;e<=10;e++)
					{
						for(int f=1;f<=10;f++)
						{
							x[0] = a;
							x[1] = b;
							x[2] = c;
							y[0] = d;
							y[1] = e;
							y[2] = f;
							found = ok();
							if(found) break;
						}
						if(found) break;
					}
					if(found) break;
					
				}
				if(found) break;
			}
			if(found) break;
		}
		if(found) break;
	}
	int cnt1=0;
	if(found)
	{
		printf("3\n");
		printf("%d %d %d\n",x[0],x[1],x[2]);
		printf("3\n");
		printf("%d %d %d\n",y[0],y[1],y[2]);
	}
	
	return 0;
}