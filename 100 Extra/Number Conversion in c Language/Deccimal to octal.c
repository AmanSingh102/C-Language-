#include <stdio.h>    // Worl perfectly

void decimalToOctal(int decimalNumber) {
    if (decimalNumber == 0) {
        printf("The octal equivalent is: 0\n");
        return;
    }

    int octalNumber[100], octalLength = 0;
    while (decimalNumber != 0) {
        octalNumber[octalLength++] = decimalNumber % 8;
        decimalNumber /= 8;
    }

    printf("The octal equivalent is: ");
    int i;
    for (i = octalLength - 1; i >= 0; i--)
        printf("%d", octalNumber[i]);
    
    printf("\n");
}

int main() {
    int decimalInput;
    printf("Enter a decimal number: ");
    scanf("%d", &decimalInput);

    decimalToOctal(decimalInput);

    return 0;
}
