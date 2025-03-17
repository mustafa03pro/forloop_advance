#include<stdio.h>
#include<math.h>
int main(){
    int n,rev=0,r=0,m;
    scanf("%d",&n);
    int temp=n*n;

    while(temp!=0){
        r=temp%10;
        rev=rev*10+r;
        temp=temp/10;
    }
   printf("%d",pow);

    return 0;
}