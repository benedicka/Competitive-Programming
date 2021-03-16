#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>







int main()
{
	int x,y;
	int a,b,c,d,e,f;
	do
	{
		scanf("%d %d",&x,&y);
		//(x/y)
		if (x==1 && y==1) break;
		a=0;//(a/b)
		b=1;
		c=1;//(c/d)
		d=0;
		e=1;//(e/f)
		f=1;
		while (a>=0)
		{
			
			if (e*y<f*x)
			{
				printf("R");
				a=e;
				b=f;
			}
			else
			{
				printf("L");
				c=e;
				d=f;
			}
			
			e=a+c;
			f=b+d;
		if (e==x && f==y) break;
		}
		printf("\n");
		
	}while (x!=1 || y!=1);
	
	
	
	
	return 0; 
}