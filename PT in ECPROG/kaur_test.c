#include <stdio.h> // for printing and scanning functions
#include "kaur_mathops.h"

int main() {
    int a, b, n, choice;
    float x, y;
    double base;
    int exp;

    while (1) { //an infinite loop that will keep the program running
        //below is the menu of choices that will show up
        printf("**********************");
        printf("\nSimple Calculator\n");
        printf("1. Add two integers\n");
        printf("2. Subtract two integers\n");
        printf("3. Multiply two integers\n");
        printf("4. Divide two integers\n");
        printf("5. Add two floating-point numbers\n");
        printf("6. Subtract two floating-point numbers\n");
        printf("7. Multiply two floating-point numbers\n");
        printf("8. Divide two floating-point numbers\n");
        printf("9. Calculate power\n");
        printf("10. Calculate factorial\n");
        printf("11. Modulo two integers\n");
        printf("12. Exit\n");
        printf("Enter your choice: ");
        scanf_s("%d", &choice); //reads the choice selection of the user
        printf("**********************\n");
        switch (choice) { //executes different choices based on users inputed numbers of choice
        case 1:
            printf("Enter two integers: ");
            scanf_s("%d %d", &a, &b);
            printf("Result: %d\n", add_int(a, b));
            break;
        case 2:
            printf("Enter two integers: ");
            scanf_s("%d %d", &a, &b);
            printf("Result: %d\n", sub_int(a, b));
            break;
        case 3:
            printf("Enter two integers: ");
            scanf_s("%d %d", &a, &b);
            printf("Result: %d\n", mult_int(a, b));
            break;
        case 4:
            printf("Enter two integers: ");
            scanf_s("%d %d", &a, &b);
            printf("Result: %d\n", div_int(a, b));
            break;
        case 5:
            printf("Enter two floating-point numbers: ");
            scanf_s("%f %f", &x, &y);
            printf("Result: %.2f\n", add_float(x, y));
            break;
        case 6:
            printf("Enter two floating-point numbers: ");
            scanf_s("%f %f", &x, &y);
            printf("Result: %.2f\n", sub_float(x, y));
            break;
        case 7:
            printf("Enter two floating-point numbers: ");
            scanf_s("%f %f", &x, &y);
            printf("Result: %.2f\n", mult_float(x, y));
            break;
        case 8:
            printf("Enter two floating-point numbers: ");
            scanf_s("%f %f", &x, &y);
            printf("Result: %.2f\n", div_float(x, y));
            break;
        case 9:
            printf("Enter base and exponent: ");
            scanf_s("%lf %d", &base, &exp);
            printf("Result: %.2f\n", power(base, exp));
            break;
        case 10:
            printf("Enter an integer: ");
            scanf_s("%d", &n);
            printf("Result: %d\n", factorial(n));
            break;
        case 11:
            printf("Enter two integers: ");
            scanf_s("%d %d", &a, &b);
            if (b != 0) {
                printf("Result: %d\n", MOD_INT(a, b));
            }
            else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        case 12:
            return 0;
        default:
            printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
