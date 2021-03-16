#include <stdio.h>
int faktorial (int z)
{
	if (z>1) return (z*faktorial (z-1));
	else return (1);
}

int main ()
{
	int x,n;
	char a[10][55];
	int k[90];
	int b=0;
	int c=0;
	long hasil;
	hasil =0;
	scanf ("%d %d",&x,&n);
	k[0]=0;
	for (int i=0;i<n;i++)
	{
		scanf ("%s",&a[i]);
	}
	for (int i=0;i<n;i++)
	{
		
		for (int j=0;j<36;j++)
		{
			 b++;
			if (a[i][j]=='0')
			{
			 
			  k[c]++;
			  
			  }
			  if (b==4)
			  {
			  	b=0;
			  	
			  	c++;
			k[c]=0;
			}
		}
			
	}
c=0;
	for (int i=0;i<n;i++)
	{
		for (int j=53;j>35;j--)
		{
			b++;
			if (a[i][j]=='0')
			{
			  
			  k[c]++;
			  
			}
			if (b==2)
			  {
			  	b=0;
			  	c++;
				
			  }
			
		}
	}

	
	for (int i=0;i<c;i++)
	{
		
	if (k[i]>=x)
	{
			hasil=hasil+(faktorial(k[i])/((faktorial(x))*(faktorial(k[i]-x))));
	}
		
	}
	printf ("%ld",hasil);
	
	return 0;
}