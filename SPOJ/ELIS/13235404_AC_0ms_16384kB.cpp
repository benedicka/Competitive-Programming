#include<stdio.h>

int main()
{
	int longest[20],a[20],n,ans = 1,temp;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	longest[0] = 1;
	for(int i=1;i<n;i++)
	{
		temp = 0;
		for (int j=i-1;j>=0;j--)
		{
			if(a[j]<a[i] && longest[j]>temp) temp = longest[j];
		}
		longest[i] = temp+1;
		if(longest[i]>ans) ans = longest[i];
	}
	printf("%d\n",ans);
	
	
	
	
	return 0;
}