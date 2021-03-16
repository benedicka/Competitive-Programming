#include<stdio.h>
bool palindrome(int h, int m)
{
	if(h>=10)
	{
		if(h/10!=m%10 || h%10!=m/10) return 0;
		else return 1;
	}
	else if(h>0)
	{
		if(h!=m%10) return 0;
		else return 1;
	}
	else
	{
		if(m<10) return 1;
		else
		{
			if(m/10 != m%10) return 0;
			else return 1;
		}
	}
}
int main()
{
	int t,h,m;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d:%d",&h,&m);
		do
		{
			m+=1;
			if(m==60)
			{
				m = 0;
				h+=1;
			}
			if(h==24)
			{
				h = 0;
			}
		}while(!palindrome(h,m));
		printf("%02d:%02d\n",h,m);
	}
	return 0;
}