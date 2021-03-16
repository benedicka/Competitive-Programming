#include<stdio.h>
long long a[100010],pending[100010],n,m,q,idx,z,pend;

int main()
{
	
	scanf("%lld %lld",&n,&m);
	for(int i=1;i<=n;i++)
	{
		scanf("%lld",&a[i]);
		pending[i] = 0;
	}
	while(m--)
	{
		scanf("%lld",&q);
		if(q==3)
		{
			scanf("%lld",&idx);
			//printf("%lld %lld %lld ",a[idx],pend,pending[idx]);
			a[idx]+=(pend-pending[idx]);
			//printf("%lld ",pending[idx]);
			pending[idx]+=(pend-pending[idx]);
			printf("%lld\n",a[idx]);
		}
		else if(q==2)
		{
			scanf("%lld",&z);
			//printf("z = %lld\n",z);
			pend+=z;
		}
		else
		{
			
			scanf("%lld %lld",&idx,&z);
			pending[idx]=pend;
			a[idx] = z;
		}
	}
	return 0;
}