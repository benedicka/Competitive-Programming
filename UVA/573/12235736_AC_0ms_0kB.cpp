#include<stdio.h>
int main()
{
	int a[100],b,c;
	int j;	
	float u[100],h[100],d[100],f[100];
	j=0;
	do
	{
		scanf("%f %f %f %f",&h[j],&u[j],&d[j],&f[j]);
		if(h[j]==0) break;
		j++;
	}while(h[j-1]!=0);
	for (int i=0;i<j;i++)
	{ 
		a[i]=0;
		c=1;
		b=h[i];
		f[i]=u[i]*f[i]/100;
		while (h[i]>=0)
		{
			if(u[i]>0)
			{
				h[i]=h[i]-u[i];
				u[i]=u[i]-f[i];
			}
		
			if (h[i]<0) 
			{
				a[i]++;
				break;
			}
			h[i]=h[i]+d[i];
			
			
			if (h[i]>b)
			{
				a[i]++;
				c=0;
				break;
			}
			a[i]++;
			
			
		}
		if(c==1) printf("success on day %d\n",a[i]);
		else printf("failure on day %d\n",a[i]);
	}
	
	return 0;
}