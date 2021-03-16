#include<stdio.h>
int n,s,h[110],m[110],ans1,ans2;
bool cek(int idx)
{
	int a,b;
	if(idx!=0)a = ans2+ans1*60+2*(s+1);
	else  a = ans2+ans1*60+s+1;
	b = h[idx]*60+m[idx];
	//printf("%d %d\n",a,b);
	if(a<=b) return 1;
	return 0;
}
int main()
{
	ans1 = 0;
	ans2 = 0;
	scanf("%d %d",&n,&s);
	for(int i=0;i<n;i++)
	{
		scanf("%d %d",&h[i],&m[i]);	
	}
	for(int i=0;i<n+1;i++)
	{
		if(i<n && cek(i))
		{
			if(i!=0)ans2+=(s+1);
			break;
		}
		if(i<n)
		{
			ans1 = h[i];
			ans2 = m[i];
		}
		else
		{
			ans2+=(s+1);
		}
	}	
	
	while(ans2>=60)
	{
		ans2-=60;
		ans1++;
	}
	printf("%d %d\n",ans1,ans2);
	return 0;
}