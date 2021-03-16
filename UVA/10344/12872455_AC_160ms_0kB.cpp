#include<stdio.h>
#include<math.h>
#include<algorithm>
int a[5],c;
void f(int x,int cek)
{
	if(c==1) return ;
	if(x==5 && cek == 23)
	{
		c = 1;
		return;
	}
	else if(x<5)
	{
		
		
			f(x+1,cek+a[x]);
			f(x+1,cek-a[x]);
			f(x+1,cek*a[x]);
		
			
	}
	return ;
}
int main()
{
   int z=1,q=0;
    while(z==1)
    {
    	for(int i=0;i<5;i++)
    	{
    		
    		scanf("%d",&a[i]);
		}
		if(a[0]==0 && a[1]==0 && a[2]==0 && a[3]==0 && a[4]==0) break;
		c = 0;
		std::sort(a,a+5);
		do
		{
			f(1,a[0]);
			if(c==1) break;
		}while(std::next_permutation(a,a+5));
		
		if(c==0) printf("Impossible\n");
		else printf("Possible\n");
	}
    return 0;
}