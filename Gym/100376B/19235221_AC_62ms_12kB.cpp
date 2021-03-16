#include <bits/stdc++.h>
#define sf scanf
#define pf printf
using namespace std;

typedef long long LL;

LL tc,row,col,x,xx,y,yy;

int main(){
    sf("%lld",&tc);
    while(tc--){
        sf("%lld %lld %lld %lld %lld %lld",&col,&row,&x,&y,&xx,&yy);
        
        LL right = col-max(x,xx);
        LL left = min(x,xx)-1;
        LL up = min(y,yy)-1;
        LL down = row-max(y,yy);
        
        // pf("%d %d %d %d\n",up,down,left,right);
        
        LL ans = row*col - 2*((left+right+1)*(up+down+1));
        
        if(abs(x-xx) >= (col+1)/2 || abs(y-yy) >= (row+1)/2){
            
        }else{
            LL rec;
            if(xx<x) swap(x,xx), swap(y,yy);
            
            // kiri atas - kanan bawah
            if(x < xx && y < yy){
                xx -= left;
                yy -= up;
                x += right;
                y += down;
                
                // pf("x=%d y=%d xx=%d yy=%d\n",x,y,xx,yy);
                rec = (x-xx+1)*(y-yy+1);
            }
            
            // kiri bawah - kanan atas
            else if(x < xx && y > yy){
                x += right;
                y -= up;
                xx -= left;
                yy += down;
                
                // pf("x=%d y=%d xx=%d yy=%d\n",x,y,xx,yy);
                rec = (x-xx+1)*(yy-y+1);
            }else if(x == xx || y == yy){
                ans = 0;
                rec = 0;
            }
            
            ans += rec;
        }
        
        pf("%lld\n",ans);
    }
    
	return 0;
}
