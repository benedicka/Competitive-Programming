#include<stdio.h>
#include<math.h>

int main()
{
    int t,n,x[2000],cek,a;
    int jum,win,max;
    scanf("%d",&t);
    while(t--)
    {
        cek = 0;
        jum = 0;
        win = 0;
        max = 0;
        a= 0;
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            scanf("%d",&x[i]);
            jum+=x[i];
            if(i==0)
            {
                win = i;
                max = x[i];
            } 
            else if(x[i]>max) 
            {
                win = i;
                max = x[i];
            }
        }
     
        for(int i=0;i<n;i++)
        {
        	if(x[i]==max && i!=win) 
			{
				 a=1;
				 break;
			}
		}
    //  printf("jumlah = %d\n",jum);
        if(a==1) printf("no winner\n");
        else if(jum-max<max) printf("majority winner %d\n",win+1);
        else if(jum-max>= max) printf("minority winner %d\n",win+1);
    }
    return 0;
}