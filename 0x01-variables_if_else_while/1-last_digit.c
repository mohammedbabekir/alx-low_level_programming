#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Entry point
 *Return: Always 0 (Success)
 */

int main() {
    // Seed the random number generator
    srand(time(NULL));

    // Generate a random number
    int n = rand();

    // Extract the last digit of n
    int lastDigit = n % 10;

    // Print the output based on the last digit
    printf("The string Last digit of %d is ", n);
    
    if (lastDigit > 5) {
        printf("and is greater than 5\n");
    } else if (lastDigit == 0) {
        printf("and is 0\n");
    } else {
        printf("and is less than 6 and not 0\n");
    }

    return 0;
}
