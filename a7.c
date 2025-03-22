#include <stdio.h>

int main() {
    int n, a, i, s, c = 0;

    printf("Enter the range (n): ");
    scanf("%d", &n);

    printf("Perfect numbers up to %d are: ", n);
    for (a = 1; a <= n; a++) {
        s = 0;
        for (i = 1; i < a; i++) {  // Use i < a to exclude a itself
            if (a % i == 0) {
                s += i;
            }
        }
        if (s == a) {
            printf("%d ", a);
            c++;
        }
    }
    
    printf("\nTotal perfect numbers found: %d\n", c);
    return 0;
}
