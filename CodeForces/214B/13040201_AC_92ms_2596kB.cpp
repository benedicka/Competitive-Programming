#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	bool ok = 0,br = 0;
	int n,a[100001],total = 0,mod[100001],index1,index2;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]==0) ok = 1;
		total+=a[i];
	}
	if(ok==0) printf("-1\n");
	else
	{
		ok = 0;
		sort(a,a+n);
//		for(int i=n-1;i>=0;i--)
//		{
//			printf("%d ",a[i]);
//		}
//		printf("\n");
		if(total%3==0)
		{
		
			for(int i=n-1;i>=0;i--)
			{
				printf("%d",a[i]);
				if(i==n-1 && a[i]==0 &&a[i+1]==0) break;
			}
			printf("\n");
		}
		else
		{
			for(int i=n-1;i>=0;i--)
			{
				
				mod[i] = a[i]%3;
			//	printf("%d ",mod[i]);
			}
		//	printf("\n");
			int keluar = total%3;
			int jumlah = 0;
			int klr=0;
			ok = 0;
			for(int i=0;i<n;i++)
			{
				if(mod[i]==keluar)
				{
					br = 1;
					a[i] = -1;
					ok = 1;
					break;
				}
			
			}
			int count = 0;
			if(ok==0)
			{
				for(int i=0;i<n;i++)
				{
					if(mod[i]!=keluar && mod[i]>0)
					{
						a[i] = -1;
						count++;
					}
					if(count==2) break;
				}
			}
			
			if(count==2) ok = 1;
			sort(a,a+n);
			if(ok==0) printf("-1\n");
			else
			{
				int c=0;
				bool valid=0;
				//printf("n = %d\n",n);
				for(int i=n-1;i>=0;i--)
				{
					if(a[i]>=0)
					{
						c++;
						printf("%d",a[i]);
					}
					if(c==1 && a[i] ==0 && a[i+1]==0) break;
					//if(a[i]>=0)printf("%d",a[i]);
				}
				printf("\n");
			}
			
			
			
			
		}
		
		
		
	}
	
	
	return 0;
}