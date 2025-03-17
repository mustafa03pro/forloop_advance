#include <stdio.h>

int main() {
    int n, temp, rev = 0, square, squareRev = 0;
    int reversedNum = 0, revSquare, tempSquare;

    // Input the number
    //printf("Enter a number: ");
    scanf("%d", &n);

    // Step 1: Reverse the number
    temp = n;
    if(temp<0){
        printf("Enter Positive value only...");return 0;
    }
    while (temp > 0) {
        reversedNum = reversedNum * 10 + (temp % 10);
        temp /= 10;
    }

    // Step 2: Compute squares
    square = n * n;                  // Square of original number
    revSquare = reversedNum * reversedNum;  // Square of reversed number

    // Step 3: Reverse the square of original number
    tempSquare = square;
    while (tempSquare > 0) {
        squareRev = squareRev * 10 + (tempSquare % 10);
        tempSquare /= 10;
    }

    // Step 4: Compare reversed square and square of reversed number
    if (squareRev == revSquare) {
        printf("%d is an Adam number.\n", n);
    } else {
        printf("%d is not an Adam number.\n", n);
    }

    return 0;
}
