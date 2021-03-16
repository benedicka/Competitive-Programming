#include<stdio.h>
#include<string.h>
int cnt,l,n,a,b;
char x[10],guess[10];
int min(int a, int b)
{
	if(a<b) return a;
	return b;
}
bool cek()
{
	int ga=0,gb=0;
	for(int i=0;i<l;i++)
	{
		if(guess[i]==x[i]) ga++;
    }
	for(int i=1;i<=9;i++)
	{
		int cnt1=0,cnt2=0;
		for(int j=0;j<l;j++)
		{
			if(guess[j]==i+'0') cnt1++;
			if(x[j]==i+'0') cnt2++;
		}
		gb+=(min(cnt1,cnt2));
	}
	gb-=ga;
	if(a==ga && b==gb) return 1;
	return 0;
}
void rand(int idx)
{
	if(idx==l)
	{
		if(cek()) cnt++;
		return;
	}
	for(int i=1;i<=9;i++)
	{
		guess[idx] = '0'+i;
		rand(idx+1);
	}
}
int main()
{
	scanf("%d",&n);
	while(n--)
	{
		scanf("%s %d %d",&x,&a,&b);
		l = strlen(x);
		cnt = 0;
		rand(0);
		printf("%d\n",cnt);
	}
	return 0;
}