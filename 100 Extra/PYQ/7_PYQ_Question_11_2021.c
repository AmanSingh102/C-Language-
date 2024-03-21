#include <stdio.h>

int main() {
    int numbers[10];
    int *ptr = numbers; // Pointer to the beginning of the array

    // Input 10 numbers into the array using pointer notation
    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", ptr + i);
    }

    // Display the numbers using pointer notation
    printf("Entered numbers are: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", *(ptr + i));
    }

    return 0;
}