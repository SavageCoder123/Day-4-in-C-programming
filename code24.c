//factorial using recurssion
#include <stdio.h>
int factorial(int n);
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d is %d\n", n, factorial(n));
    }
    
    return 0;
}
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}
