#include <stdio.h>

int factorial(int n) {
    // Base case: factorial of 0 or 1 is 1
    if (n >0) {
     return n*factorial(n-1);
     }
     else
     {
     	return 1;
     }
    // Recursive case: calculate factorial of n by calling t
}

int main() {
    int number = 4;
    int result = factorial(number);
    printf("The factorial of %d is %d\n", number, result);
    return 0;
}
