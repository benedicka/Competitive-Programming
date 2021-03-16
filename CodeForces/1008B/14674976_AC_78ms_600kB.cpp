#include<stdio.h>

int max(int a, int b)
{
	if(a>b) return a;
	return b;
}
int min(int a, int b)
{
	if(a<b) return a;
	return b;
}
int main()
{
	int a[100010],b[100010],prev,n;
	bool ok;
	ok = 1;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d %d",&a[i],&b[i]);
	}
	prev = max(a[0],b[0]);
	for(int i=1;i<n;i++)
	{
		if(prev>=max(a[i],b[i]))
		{
			prev = max(a[i],b[i]);
		}
		else if(prev>=min(a[i],b[i]))
		{
			prev = min(a[i],b[i]);
		}
		else
		{
			ok = 0;
			break;
		}
	}
	if(ok) printf("YES\n");
	else printf("NO\n");
	return 0;
}