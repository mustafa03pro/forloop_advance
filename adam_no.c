#include<stdio.h>
int main(){
    int n,rev=0,revsqr,sqr,r=0,b=0,sqrNum;
    scanf("%d",&n);
    int temp=n;
    
    if(temp<0){
        printf("Enter Positive value only...");return 0;
    }
    while(temp>0){
        r=temp%10;
        rev=rev*10+r;
        temp=temp/10;

    }
    sqr=n*n;
    revsqr=rev*rev;
    int tempsqr=sqr;
    while(tempsqr>0){
        b=tempsqr%10;
        sqrNum=sqrNum*10+b;
        tempsqr=tempsqr/10;

        
    }
    if(revsqr==sqrNum){
        printf("%d is an Adam number.\n",n);
    }
    else{
        printf("%d is not an Adam number.\n",n);
    }


    return 0;
}