#include<stdio.h>
int main(){
    int n,a,b,f,rev,c=0,r,i;
    scanf("%d",&n);
    for( i=1;i<=n;i++){
        if(n%i==0)c++;

    }
    if(c==2){
        while(n){
            r=n%10;
            rev=rev*10+r;
            n=n/10;

        }
        for(c=0,i=1;i<=rev;i++){
        
            if(rev%i==0)c++;
        }
        if(c==2){
            printf(" is a twisted prime");
        }
        else {
            printf(" is not a twisted pair");
        }
        
    }
    else printf("it is not a prime no primes");
    return 0;
}