#include<stdio.h>
int main(){
    int n1,n2,count=0,i,is_prime;
    scanf("%d%d",&n1,&n2);
    printf("Prime numbers in the range are: ",i);
    for(int i=n1;i<n2;i++){
        if(i<2)continue;
            is_prime=1;
        
        for(int j=2;j*j<=i;j++){
             if (i % j == 0) {
                is_prime = 0; // Not a prime number
                break;
            }
        }
        if (is_prime) {
            printf("%d ", i);
            count++;
        }
        
    }
    printf("and count is %d",count);

    return 0;
}