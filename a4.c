//Write a C program to find the given digit position in given number.
// Input :
// 	Enter a number : 987965
// 	Enter search digit : 9
// Expected Output :
// 		9 in 1 position
// 		9 in 4 position
// Sample Input
// 987956
// 9
// Sample Output
// 9 in 1 position
// 9 in 4 position
#include<stdio.h>
int main(){
    
    int n,a,rev=0,c=0,f=0,i,r,m,d,v;
    scanf("%d %d",&n,&d);
    
    
    for(m=n;m!=0;m=m/10){
        r=m%10;
        rev=rev*10+r;
    }
        for(m=rev;m!=0;m=m/10){
            c++;
            //v=m%10;
            if(m%10==d){
                printf("%d is in %d position\n",d,c);
                f=1;
            }
            //c--;
            
        }
    
    if(f==0){
        printf("%d not found",d);
    }
  
        
    
    
    return 0;
}