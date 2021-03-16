#include <stdio.h>
#include<stdlib.h>
int main()
{
	long long n,m,s,ans1,ans2,sisa,c;
	
	while(scanf("%lld %lld %lld",&n,&m,&s)!=EOF)
	{
	    ans1 = 1;
	    ans2 = 1;
	    if(s>=n)
	    {
	    	
	        s-=(n-1);
	        ans1 =n;
	    }
	    else
	    {
	        ans1+=s;
	        s = 0;
	    }
//	    printf("%lld %lld\n",ans1,ans2);
//	    printf("sisa = %lld\n",s);
	    if(s>0)
	    {
		    c = (s-1)/(m-1);
		    ans1-=c;
		    ans1%2==0?ans2+=(s-c*(m-1)) : ans2+=((m)-(s-c*(m-1)));
		}
	
	    printf("%lld %lld\n",ans1,ans2);
	}


return 0;
}