#include<stdio.h>
int prime[12] = {2,3,5,7,11,13,17,19,23,29,31},t = 1,n,a[17] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16},b[17],c=0;
bool flag[20];
int isprime(int x)
{
	for(int j=0;j<12;j++)
	{
		if(x==prime[j]) return 1;
	}
	return 0;
}
void f(int idx)
{

	if(idx == n)
	{
		//c++;
		for(int i=0;i<n;i++)
		{
			printf("%d",b[i]);
			if(i<n-1) printf(" ");
			
		}
		printf("\n");
		return;
	}

	for(int i=1;i<n;i++)
	{
		if(flag[i]==0 && isprime(b[idx-1]+a[i])==1 && idx<n-1)
		{
				flag[i] = 1;
				b[idx] = a[i];
				f(idx+1);
				flag[i] = 0;
		}
		else if(flag[i]==0 && isprime(b[idx-1]+a[i])==1 && isprime(b[0]+a[i])==1 && idx==n-1)
		{
				flag[i] = 1;
				b[idx] = a[i];
				f(idx+1);
				flag[i] = 0;
		}
	}	
	
	return;
}
int main()
{
	while (scanf("%d",&n)!=EOF)
	{
		if(t>1) printf("\n");	
		printf("Case %d:\n",t);
		for(int i =0;i<n;i++)
		{
			flag[i] = 0;
		}
		t++;
		b[0] = 1;
		flag[0] = 1;
		f(1);
	
	}
	
	
	
	return 0;
}