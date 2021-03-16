#include<stdio.h>
#include<stack>
#include<string>
#include<iostream>
using namespace std;
stack < string > pile[20];
string c,curr,x[100];
int cnt,now;
int main()
{
    while(1)
    {
        cnt = 0;
        for(int i=0;i<=12;i++)
        {
            while(!pile[i].empty())
            {
                pile[i].pop();
            }
        }
        for(int i=0;i<52;i++)
        {
            cin>>x[i];
            if(x[i]=="#") break;
        }
        if(x[0]=="#") break;
        int z = 0;
        for(int i=51;i>=0;i--)
        {
            pile[z%13].push(x[i]);
            z++;
        }
        now = 12;
        while(1)
        {
            if(pile[now].empty()) break;
            cnt++;
            curr = pile[now].top();
            pile[now].pop();
            if(curr[0]=='A') now = 0;
            else if(curr[0]=='2') now = 1;
            else if(curr[0]=='3') now = 2;
            else if(curr[0]=='4') now = 3;
            else if(curr[0]=='5') now = 4;
            else if(curr[0]=='6') now = 5;
            else if(curr[0]=='7') now = 6;
            else if(curr[0]=='8') now = 7;
            else if(curr[0]=='9') now = 8;
            else if(curr[0]=='T') now = 9;
            else if(curr[0]=='J') now = 10;
            else if(curr[0]=='Q') now = 11;
            else if(curr[0]=='K') now = 12;
            
        }
        printf("%02d,",cnt);
        cout<<curr<<endl;
    }
    return 0;
}
