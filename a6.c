// 1..n perfect numbers
#include<stdio.h>
int main(){
    int n,a,c=0,i,s;
    scanf("%d",&n);
    for(a=1;a<=n;a++){
        s=0;
        for(i=1;i<a;i++){
            if(a%i==0){
                s=s+i;
            }
        }
        if(s==a){
            printf("%4d",a,c++);
            
        }
        
    }
    printf("\n%4d perfect no",c);
    return 0;
}
// 500
//    6  28 496
//    3 perfect no