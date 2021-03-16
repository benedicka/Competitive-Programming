#include<stdio.h>

int main(){
	int a;
	int b;
	int c;
	int d;
	int e;
	scanf("%d",&a);
	scanf("%d",&b);
    if(a==1 && b ==1){
        e = 1;
    }else if(a==1 && b>1 && b%2==0){
        e = b/2;
    }else if(a==1 && b>1 && b%2==1){
        e = (b/2)+1;
    }else if(b==1 && a>1 && a%2==0){
        e = a/2;
    }else if(b==1 && a>1 && a%2==1){
        e = (a/2)+1;
    }else if (a%2==1 && b%2==1){
        c = a+1;
        d = b+1;
        e = c*d/4;             
    }else if (a%2==0 && b%2==0){
        e = a*b/4;             
    }else if (a%2==1 && b%2==0){
        c = a+1;
        d = b;
        e = c*d/4;             
    }else{
        c = a;
        d = b+1;
        e = c*d/4;             
    }printf("%d",e);
}