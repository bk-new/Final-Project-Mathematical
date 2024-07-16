#include "kaur_mathops.h"
// Function definition for power that implements using the pow function from the mathops library.
double power(double base, int exp) { 
    return pow(base, exp);
}

// Function definition for factorial using int
int factorial(int n) {
    if (n < 0) {
        return 0; // Factorial of a negative number is undefined
    }
    if (n == 0 || n == 1) {
        return 1;
    }
    int result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}
