#include <stdio.h>

int main() {
    int n, d, m, pos = 0, rev = 0, flag = 0;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Enter search digit: ");
    scanf("%d", &d);
    
    // Reverse the number to process from left to right
    for (m = n; m != 0; m /= 10) {
        rev = rev * 10 + (m % 10);
    }
    
    // Iterate through the reversed number and find digit positions
    for (m = rev; m != 0; m /= 10) {
        pos++;
        if (m % 10 == d) {
            printf("%d in %d position\n", d, pos);
            flag = 1;
        }
    }
    
    if (flag == 0) {
        printf("Digit %d not found in the number.\n", d);
    }
    
    return 0;
}
// 456788
// 8
// 8 is in 5 position
// 8 is in 6 position