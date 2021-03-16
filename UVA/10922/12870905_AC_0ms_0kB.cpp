#include<stdio.h>
#include<string.h>


int main()
{
	
	char x[1002];
	int a,length,b,cek;
	while(scanf("%s",&x)!=EOF)
	{
		if(strcmp(x,"0")==0) break;
		length  = strlen(x);
		a = 0;
		for(int i=0;i<length;i++)
		{
			a+=(x[i]-'0');
		}
		
		if(a%9!=0) printf("%s is not a multiple of 9.\n",x);
		else
		{
			if(a==9) printf("%s is a multiple of 9 and has 9-degree 1.\n",x);
			else
			{
				cek = 0;
				b = 0;
				while(b!=9)
				{
					b = 0;
					while(a!=0)
					{
						b+=a%10;
						a/=10;
					}
					cek++;
					a = b;
				}
				printf("%s is a multiple of 9 and has 9-degree %d.\n",x,cek+1);
			}
		}
	}
	
	
	
	
	
	
	return 0;
}