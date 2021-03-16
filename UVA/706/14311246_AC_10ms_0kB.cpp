#include<stdio.h>
#include<string.h>
void one(int i, int sz)
{
	if(i==0 || i==2 || i==4)
	{
		for(int i=1;i<=sz+2;i++)
		{
			printf(" ");
		}
	}
	else if(i==1 || i ==3)
	{
			for(int i=1;i<=sz+2;i++)
			{
				if(i!=sz+2)printf(" ");
				else 
				{
					printf("|");
				}
			}
		
	}
}
void two(int i,int sz)
{
	if(i==0 || i==2 || i==4)
	{
		printf(" ");
		for(int i=1;i<=sz;i++)
		{
			printf("-");
		}
		printf(" ");
	}
	else if(i==1)
	{
			for(int i=1;i<=sz+2;i++)
			{
				if(i!=sz+2)printf(" ");
				else 
				{
					printf("|");
				}
			}
		
	}
	else if(i==3)
	{
			for(int i=1;i<=sz+2;i++)
			{
				if(i>1)
				{
					printf(" ");	
				}
				else 
				{
					printf("|");
						
				}
			}
		
	}
}
void three(int i, int sz)
{
	if(i==0 || i==2 || i==4)
	{
		printf(" ");
		for(int i=1;i<=sz;i++)
		{
			printf("-");
		}
		printf(" ");
	}
	else if(i==1 || i ==3)
	{
			for(int i=1;i<=sz+2;i++)
			{
				if(i!=sz+2)printf(" ");
				else 
				{
					printf("|");	
				}
			}
		
	}
}
void four(int i,int sz)
{
	if(i==0 || i==4)
	{
		for(int i=1;i<=sz+2;i++)
		{
			printf(" ");
		}
	}
	else if(i==1)
	{
			printf("|");
			for(int i=1;i<=sz;i++)
			{
				printf(" ");
			}
			printf("|");
		
	}
	else if(i==2)
	{
		printf(" ");
		for(int i=1;i<=sz;i++)
		{
			printf("-");
		}
		printf(" ");
	}
	else if(i==3)
	{
			for(int i=1;i<=sz+2;i++)
			{
				if(i!=sz+2)printf(" ");
				else 
				{
					printf("|");	
				}
			}
	}
}
void five(int i,int sz)
{
	if(i==0 || i==2 || i==4)
	{
		printf(" ");
		for(int i=1;i<=sz;i++)
		{
			printf("-");
		}
		printf(" ");
	}
	else if(i==1)
	{
		printf("|");
		for(int i=1;i<sz+2;i++)
		{
			printf(" ");
		}	
	}
	else if(i==3)
	{
			for(int i=1;i<=sz+2;i++)
			{
				if(i!=sz+2)printf(" ");
				else 
				{
					printf("|");	
				}
			}
	}
}
void six(int i,int sz)
{
	if(i==0 || i==2 || i==4)
	{
		printf(" ");
		for(int i=1;i<=sz;i++)
		{
			printf("-");
		}
		printf(" ");
	}
	else if(i==1)
	{
		printf("|");
		for(int i=1;i<sz+2;i++)
		{
			printf(" ");
		}	
	}
	else if(i==3)
	{
			printf("|");
			for(int i=1;i<=sz;i++)
			{
				printf(" ");
			}
			printf("|");
		
	}
}
void seven(int i,int sz)
{
	if(i==0)
	{
		printf(" ");
		for(int i=1;i<=sz;i++)
		{
			printf("-");
		}
		printf(" ");
	}
	if(i==2 || i==4)
	{
		for(int i=1;i<=sz+2;i++)
		{
			printf(" ");
		}
	}
	else if(i==1 || i ==3)
	{
			for(int i=1;i<=sz+2;i++)
			{
				if(i!=sz+2)printf(" ");
				else 
				{
					printf("|");
				}
			}
		
	}
}
void eight(int i, int sz)
{
	if(i==0 || i==2 || i==4)
	{
		printf(" ");
		for(int i=1;i<=sz;i++)
		{
			printf("-");
		}
		printf(" ");
	}
	else if(i==3 || i==1)
	{
			printf("|");
			for(int i=1;i<=sz;i++)
			{
				printf(" ");
			}
			printf("|");
		
	}
}
void nine(int i, int sz)
{
	if(i==0 || i==2 || i==4)
	{
		printf(" ");
		for(int i=1;i<=sz;i++)
		{
			printf("-");
		}
		printf(" ");
	}
	else if(i==1)
	{
			printf("|");
			for(int i=1;i<=sz;i++)
			{
				printf(" ");
			}
			printf("|");
		
	}
	else if(i==3)
	{
		for(int i=1;i<=sz+2;i++)
			{
				if(i!=sz+2)printf(" ");
				else 
				{
					printf("|");	
				}
			}
	}
}
void zero(int i, int sz)
{
	if(i==0 || i==4)
	{
		printf(" ");
		for(int i=1;i<=sz;i++)
		{
			printf("-");
		}
		printf(" ");
	}
	else if(i==3 || i==1)
	{
			printf("|");
			for(int i=1;i<=sz;i++)
			{
				printf(" ");
			}
			printf("|");
		
	}
	else
	{
		for(int i=1;i<=sz+2;i++)
		{
			printf(" ");
		}
	}
}
int main()
{
	char x[1010];
	int s,l,c;
	while(scanf("%d %s",&s,&x)!=EOF)
	{
		if(s==0) break;
		l = strlen(x);
		for(int i=1;i<=2*s+3;i++)
		{
			if(i==1) c = 0;
			else if(i<((2*s+3+1)/2)) c = 1;
			else if(i==(2*s+3+1)/2) c = 2;
			else if(i<2*s+3) c = 3;
			else if( i==2*s+3 ) c = 4;
			for(int j=0;j<l;j++)
			{
				if(x[j]=='1') one(c,s);
				else if(x[j]=='2') two(c,s);
				else if(x[j]=='3') three(c,s);
				else if(x[j]=='4') four(c,s);
				else if(x[j]=='5') five(c,s);
				else if(x[j]=='6') six(c,s);
				else if(x[j]=='7') seven(c,s);
				else if(x[j]=='8') eight(c,s);
				else if(x[j]=='9') nine(c,s);
				else zero(c,s);
				if(j==l-1) printf("\n");
				else printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}