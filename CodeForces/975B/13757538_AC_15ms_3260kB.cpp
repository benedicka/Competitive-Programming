#include<stdio.h>
int main()
{
	long long a[15],ans,cek[15],sisa,ambil,now,temp;
	ans = 0;
	for(int i=0;i<14;i++)
	{
		scanf("%lld",&a[i]);
	}
	for(int i=0;i<14;i++)
	{
		for(int j=0;j<14;j++)
		{
			cek[j] = a[j];
		
		}
		ambil = a[i];
		cek[i] = 0;
		sisa = ambil%14;
		ambil/=14;
		for(int j=0;j<14;j++)
		{
			cek[j]+=ambil;
		}
		
		now = i+1;
		if(now==14) now = 0;
		if(sisa>0)
		{
			while(sisa--)
			{
				cek[now]++;
				now++;
				if(now==14) now = 0;
			}
		}
		temp = 0;
		for(int j=0;j<14;j++)
		{
			if(cek[j]%2==0) temp+=cek[j];
		}
		if(temp>ans) ans = temp;
//		for(int j=0;j<14;j++)
//		{
//			printf("%lld ",cek[j]);
//		}
//		printf("temp = %lld",temp);
//		printf("\n");
	}
	printf("%lld\n",ans);
	
	return 0;
}