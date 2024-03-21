#include <stdio.h>    // Work perfectly 
#include <stdlib.h>

int hexToDecimal(char hexDigit) {
    if (hexDigit >= '0' && hexDigit <= '9') {
        return hexDigit - '0';
    } else if (hexDigit >= 'A' && hexDigit <= 'F') {
        return hexDigit - 'A' + 10;
    } else if (hexDigit >= 'a' && hexDigit <= 'f') {
        return hexDigit - 'a' + 10;
    } else {
        return -1; // Invalid hex digit
    }
}

int hexadecimalToDecimal(char hexInput[]) {
    int decimalNumber = 0;
    int i;
    
    for (i = 0; hexInput[i] != '\0'; i++) {
        int digitValue = hexToDecimal(hexInput[i]);
        if (digitValue == -1) {
            printf("Invalid hexadecimal digit: %c\n", hexInput[i]);
            exit(1);
        }
        decimalNumber = decimalNumber * 16 + digitValue;
    }
    return decimalNumber;
}

int main() {
    char hexInput[100];
    printf("Enter a hexadecimal number: ");
    scanf("%s", hexInput);

    // Convert hexadecimal to decimal
    int decimalResult = hexadecimalToDecimal(hexInput);

    printf("The decimal equivalent is: %d\n", decimalResult);

    return 0;
}
