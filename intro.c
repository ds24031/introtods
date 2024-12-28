#include <stdio.h>

// Collaborator: Δέσποινα Γκλεζάκου
int main() {
    int num1, num2, sum;

    // Prompting user for input
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2); // προσθήκη ερωτηματικού

    // Calculating summary of numbers
    sum = num1 + num2; // + αντί για *

    // Printing the result
    printf("The sum of %d and %d is %d\n", num1, num2, sum); // %d αντί για %s

    return 0; // προσθήκη ;
}
