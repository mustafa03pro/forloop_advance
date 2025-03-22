#include<stdio.h>
int main(){
    int n,a,b,f,rev,c=0;
    scanf("%d",&n);
    for(a=2;a<=n;a++){
        for(f=0,b=1;b<=a;b++){
            if(a%b==0)f++;
        }
        if(f==2)printf("%4d",a,c++);
        
    }
    printf("\n%4d primes",c);
    return 0;
}