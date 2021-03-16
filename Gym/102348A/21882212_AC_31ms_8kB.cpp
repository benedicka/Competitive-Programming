#include<bits/stdc++.h>
	using namespace std;
	int a1,a2,k1,k2,n,mn,mx,aa,ab,ka,kb,a,b;
	
	int main()
	{
		scanf("%d %d %d %d %d",&a1,&a2,&k1,&k2,&n);
		a = k1-1;
		b = k2-1;
		aa = a1;
		ab = a2;
		//printf("%d %d %d %d %d\n",a,b,aa,ab,a*aa+ab*b);
		if(aa*a+ab*b>=n) mn = 0;
		else
		{
			mn = n-aa*a-ab*b;
		}
		if(k1<k2)
		{
			mx+=min(a1,(n/k1));
			n-=min(a1*k1,(n/k1)*k1);
			mx+=min(a2,n/k2);
		}
		else
		{
			swap(a1,a2);
			swap(k1,k2);
			mx+=min(a1,(n/k1));
			n-=min(a1*k1,(n/k1)*k1);
			mx+=min(a2,n/k2);
		}
		printf("%d %d\n",mn,mx);
		return 0;
	}