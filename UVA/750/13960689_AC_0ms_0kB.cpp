#include<stdio.h>
#include<stdlib.h>
int ans[10],t,a,b,s;
bool cek(int x,int y)
{
	for(int i=0;i<x;i++)
	{
		if(ans[i]!=-1)
		{
			if(ans[i]==y) return 0;
			else if(x+y==i+ans[i]) return 0;
			else if(x-y==i-ans[i]) return 0;
		}
		
	}
	return 1;
}
void chess(int x)
{
	if(x==8)
	{
		printf("%2d     ",s);
		s+=1;
		for(int i=0;i<8;i++)
		{
			printf(" %d",ans[i]+1);
		}
		printf("\n");
		return;
	}
	if(x==a)
	{
		if(cek(a,b))
		{
			ans[x] = b;
			chess(x+1);
			ans[x] = -1;
		}
	}
	else
	{	
		for(int i=0;i<8;i++)
		{
			if(cek(x,i))
			{
				ans[x] = i;
				chess(x+1);
				ans[x] = -1;
			}
		}
	}
	return;
}
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&b,&a);
		a-=1;
		b-=1;
		for(int i=0;i<8;i++) ans[i] = -1;
		s = 1;
		printf("SOLN       COLUMN\n");
 		printf(" #      1 2 3 4 5 6 7 8\n\n");
		chess(0);
		if(t>0) printf("\n");
	}
	return 0;
}