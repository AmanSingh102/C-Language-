#include <stdio.h>   // Work Perfectly

// Function to convert binary to decimal
int binaryToDecimal(long long binaryNumber) {
    int decimalNumber = 0, i = 0;
    while (binaryNumber != 0) {
        decimalNumber += (binaryNumber % 10) * (1 << i);
        binaryNumber /= 10;
        ++i;
    }
    return decimalNumber;
}

// Function to convert decimal to binary
long long decimalToBinary(int decimalNumber) {
    long long binaryNumber = 0, remainder, base = 1;
    while (decimalNumber != 0) {
        remainder = decimalNumber % 2;
        binaryNumber += remainder * base;
        decimalNumber /= 2;
        base *= 10;
    }
    return binaryNumber;
}

int main() {
    long long binaryInput;
    printf("Enter a binary number: ");
    scanf("%lld", &binaryInput);

    // Convert binary to decimal
    int decimalResult = binaryToDecimal(binaryInput);
    printf("The decimal equivalent is: %d\n", decimalResult);

    int decimalInput;
    printf("Enter a decimal number: ");
    scanf("%d", &decimalInput);

    // Convert decimal to binary
    long long binaryResult = decimalToBinary(decimalInput);
    printf("The binary equivalent is: %lld\n", binaryResult);

    return 0;
}
