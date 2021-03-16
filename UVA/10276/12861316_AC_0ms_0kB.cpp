#include<stdio.h>
#include<math.h>
int posisi = 1,max,c=0,d=1;
float a[55];

int f(int posisi,int skrg)
{
	if(posisi>max) return c;
	if(a[posisi]==0)
	{
		a[posisi] = skrg;
		skrg++;
		c++;
		//printf("%f %d\n",a[posisi],posisi);
		f(1,skrg);
	}
	else
	{
		int cek;
		cek = sqrt(a[posisi]+skrg);
		if(a[posisi]+skrg==cek*cek)
		{
			c++;
			a[posisi] = skrg;
			skrg++;
			//printf("%f %d\n",a[posisi],posisi);
			f(1,skrg);
		}
		else
		{
posisi++;
			f(posisi,skrg);
		}
	}
}
int main()
{
	int t,ans;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
		scanf("%d",&max);
		c = 0;
		d = 1;
		for(int i=1;i<=max+1;i++)
		{
			a[i] = 0;
		}
		ans = f(1,d);
		printf("%d\n",ans);
	}
	
	
	
	
	return 0;
}
