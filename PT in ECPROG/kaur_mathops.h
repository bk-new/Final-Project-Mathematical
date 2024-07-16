#pragma once

// Defining macros for integer operations
#define add_int(a, b) ((a) + (b))
#define sub_int(a, b) ((a) - (b))
#define mult_int(a, b) ((a) * (b))
#define div_int(a, b) ((b) != 0 ? ((a) / (b)) : 0) //(b) != 0 checks if b is not equal to 0, to not let any runtime error to occur macro returns to 0
#define MOD_INT(a, b) ((a) % (b)) // Modulo operation
//#define div_int(a, b) ((a) / (b)) // No check for zero

// Defining macros for floating-point operations
#define add_float(a, b) ((a) + (b)) 
#define sub_float(a, b) ((a) - (b))
#define mult_float(a, b) ((a) * (b))
#define div_float(a, b) ((b) != 0.0f ? ((a) / (b)) : 0.0f)

#include <math.h>
//my header file name
#include "kaur_mathops.h"

// Function prototypes for power and factorial
double power(double base, int exp);
int factorial(int n);
