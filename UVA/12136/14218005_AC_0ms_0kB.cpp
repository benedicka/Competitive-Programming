#include<stdio.h>
int t,a,b,c,d,e,f,g,h,ms,mf,ws,wf;
int main()
{  
    scanf("%d",&t);
   	for(int tc=1;tc<=t;tc++)
    {
        scanf("%d:%d %d:%d",&a,&b,&c,&d);
        ms=a*60+b;
		mf=c*60+d;
		//printf("%d %d\n",ms,mf);
        scanf("%d:%d %d:%d",&e,&f,&g,&h);
        ws=e*60+f;
		wf=g*60+h;
		//printf("%d %d\n",ws,wf);
        printf("Case %d: ",tc);
        if(ws<=mf && wf>=ms)printf("Mrs Meeting\n");
        else printf("Hits Meeting\n");
    }
    return 0;
}