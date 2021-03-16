#include<stdio.h>
int main()
{
int n,ans;
char x[4];
ans=0;
scanf("%d",&n);
for (int i=0;i<n;i++)
{
scanf("%s",&x);
if (x[1]=='+') ans++;
else ans--;
}
printf("%d\n",ans);

return 0;
}