#include <stdio.h>

int octalToDecimal(int octalNumber) {
    int decimalNumber = 0, i = 0;
    while (octalNumber != 0) {
        decimalNumber += (octalNumber % 10) * (1 << (3 * i));
        octalNumber /= 10;
        ++i;
    }
    return decimalNumber;
}

int main() {
    long long octalInput;
    printf("Enter an octal number: ");
    scanf("%lld", &octalInput);

    // Convert octal to decimal
    int decimalResult = octalToDecimal(octalInput);

    printf("The decimal equivalent is: %d\n", decimalResult);

    return 0;
}
