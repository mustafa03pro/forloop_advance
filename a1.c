#include<stdio.h>
int main(){
    int n,a,m,r,rev,c=0;
    scanf("%d",&n);
    for(a=1;a<=n;a++){
        for(m=a,rev=0;m!=0;m=m/10){
            r=m%10;
            rev=rev*10+r;
        }
        if(a==rev)printf("%4d",a,c++);
    }
    printf("\n%4d palindrom",c);
    return 0;
}