#include <stdio.h>
#include <math.h>

// Function to convert binary fraction to decimal fraction
double binaryFractionToDecimal(char binaryFraction[]) {
    double decimalFraction = 0.0;
    int length = 0;

    while (binaryFraction[length] != '\0') {
        if (binaryFraction[length] == '1') {
            decimalFraction += 1.0 / pow(2, length + 1);
        }
        ++length;
    }

    return decimalFraction;
}

// Function to convert decimal fraction to binary fraction
void decimalFractionToBinary(double decimalFraction) {
    printf("The binary equivalent is: 0.");
    int i;

    for (i = 0; i < 10; ++i) {
        decimalFraction *= 2;
        printf("%d", (int)decimalFraction);
        decimalFraction -= (int)decimalFraction;
    }

    printf("\n");
}

int main() {
    char binaryFraction[100];
    printf("Enter a binary fraction: ");
    scanf("%s", binaryFraction);

    // Convert binary fraction to decimal fraction
    double decimalFractionResult = binaryFractionToDecimal(binaryFraction);
    printf("The decimal equivalent is: %lf\n", decimalFractionResult);

    double decimalFractionInput;
    printf("Enter a decimal fraction: ");
    scanf("%lf", &decimalFractionInput);

    // Convert decimal fraction to binary fraction
    decimalFractionToBinary(decimalFractionInput);

    return 0;
}
