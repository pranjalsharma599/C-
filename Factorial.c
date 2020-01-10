// FACTORIAL PROGRAM 
// EG; 5! =  5 * 4 * 3 * 2 * 1 = 120

#include <stdio.h>
int main() { 
    int n, i;       //DECLARING TWO VARIABLES
    unsigned long long fact = 1;      //INITIALISING FACT VARIABLE WITH 1 AS THAT WILL BE FURTHER MULTIPLIED; LONG AS IT MAY BE VERY LARGE
    printf("Enter an integer: ");
    scanf("%d", &n);                  // TAKING INOUT FROM USER
    
    if (n < 0)                        // shows error if the user enters a negative integer 
        printf("Error! Factorial of a negative number doesn't exist.");
    else {
        for (i = 1; i <= n; ++i) {    // FOR LOOP FOR TARVERSING  ALL THE VALUE UNTIL REACHES 1
            fact *= i;                // MULTIPLYING EACH VALUE WITH FACT
        }
        printf("Factorial of %d = %llu", n, fact);       // PRINTING RESULT
    }
    return 0;
}
