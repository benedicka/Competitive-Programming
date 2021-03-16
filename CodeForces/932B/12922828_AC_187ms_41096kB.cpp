#include<stdio.h>
int p[1000001],pref[9][1000001];
int digit(int x)
{
	int a = 1;
	if(x<10) return x;
	while(x>0)
	{
		if(x%10!=0) a*=x%10;
		x/=10; 
	}
	if(a>=10)
	{
		if(p[a]!=0) a = p[a];
	}
	else digit(a);
	return a;
}
void pre()
{
	for(int i=1;i<=1000000;i++)
	{
		p[i] = digit(i);
	}
}
int main()
{
	pre();
	pref[0][0] = 0;
	pref[1][0] = 0;
	pref[2][0] = 0;
	pref[3][0] = 0;
	pref[4][0] = 0;
	pref[5][0] = 0;
	pref[6][0] = 0;
	pref[7][0] = 0;
	pref[8][0] = 0;
	for(int i=0;i<9;i++)
	{
		for(int j=1;j<=1000000;j++)
		{ 
			if(p[j]==i+1)
			{
				pref[i][j] = pref[i][j-1]+1;
			}
			else pref[i][j] = pref[i][j-1];
			//printf("%d ",pref[i][j]);
		}
		//printf("\n");
	}
	
	
	int t,l,r,a,ans;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d %d",&l,&r,&a);
		printf("%d\n",pref[a-1][r]-pref[a-1][l-1]);
	}
	return 0;
}