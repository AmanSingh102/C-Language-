#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    // Get the number of integers from the user
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    // Allocate memory for n integers
    int *arr = (int *)malloc(n * sizeof(int));

    // Check if memory allocation is successful
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1; // Exit the program with an error code
    }

    // Input the integers from the user
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Display the entered integers
    printf("Entered integers are: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Free the dynamically allocated memory
    free(arr);

    return 0;
}