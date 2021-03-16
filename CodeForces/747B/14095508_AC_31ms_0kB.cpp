#include<stdio.h>
int n,a,c,g,t,ubah;
char x[300];

int main()
{
	scanf("%d",&n);
	scanf("%s",&x);
	if(n%4!=0) printf("===\n");
	else
	{
		for(int i=0;i<n;i++)
		{
			if(x[i]=='A') a++;
			else if(x[i]=='C') c++;
			else if(x[i]=='G') g++;
			else if(x[i]=='T') t++;
			else ubah++;
		}
		if(a>n/4 || c>n/4 || g>n/4 || t>n/4) printf("===\n");
		else
		{
			a = n/4-a;
			c = n/4-c;
			g = n/4-g;
			t = n/4-t;
			for(int i=0;i<n;i++)
			{
				if(x[i]!='?') printf("%c",x[i]);
				else
				{
					if(a>0)
					{
						printf("A");
						a--;
					}
					else if(c>0) 
					{
						printf("C");
						c--;
					}
					else if(g>0)
					{
						printf("G");
						g--;
					}
					else if(t>0)
					{
						t--;
						printf("T");
					}
				}
			}
			printf("\n");
		}
	}
	return 0;
}