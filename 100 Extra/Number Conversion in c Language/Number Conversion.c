#include <stdio.h>
#include <stdlib.h>

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

// Function to convert hexadecimal to decimal
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

// Function to convert decimal to hexadecimal
void decimalToHexadecimal(int decimalNumber) {
    char hexDigits[] = "0123456789ABCDEF";
    char hexadecimalNumber[100];
    int index = 0;
    int i;

    while (decimalNumber != 0) {
        int remainder = decimalNumber % 16;
        hexadecimalNumber[index++] = hexDigits[remainder];
        decimalNumber /= 16;
    }

    printf("The hexadecimal equivalent is: ");
    for (i = index - 1; i >= 0; i--) {
        printf("%c", hexadecimalNumber[i]);
    }
    printf("\n");
}

// Function to convert octal to decimal
int octalToDecimal(int octalNumber) {
    int decimalNumber = 0, i = 0;
    while (octalNumber != 0) {
        decimalNumber += (octalNumber % 10) * pow(8, i);
        octalNumber /= 10;
        ++i;
    }
    return decimalNumber;
}

// Function to convert decimal to octal
void decimalToOctal(int decimalNumber) {
    int octalNumber[100], octalLength = 0;
    int i;
    
    while (decimalNumber != 0) {
        octalNumber[octalLength++] = decimalNumber % 8;
        decimalNumber /= 8;
    }
    printf("The octal equivalent is: ");
    for (i = octalLength - 1; i >= 0; i--) {
        printf("%d", octalNumber[i]);
    }
    printf("\n");
}

int main() {
    int choice;
    printf("Choose a conversion:\n");
    printf("1. Binary to Decimal\n");
    printf("2. Decimal to Binary\n");
    printf("3. Hexadecimal to Decimal\n");
    printf("4. Decimal to Hexadecimal\n");
    printf("5. Octal to Decimal\n");
    printf("6. Decimal to Octal\n");
    printf("Enter your choice (1-6): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: {
            long long binaryInput;
            printf("Enter a binary number: ");
            scanf("%lld", &binaryInput);
            int decimalResult = binaryToDecimal(binaryInput);
            printf("The decimal equivalent is: %d\n", decimalResult);
            break;
        }
        case 2: {
            int decimalInput;
            printf("Enter a decimal number: ");
            scanf("%d", &decimalInput);
            long long binaryResult = decimalToBinary(decimalInput);
            printf("The binary equivalent is: %lld\n", binaryResult);
            break;
        }
        case 3: {
            char hexInput[100];
            printf("Enter a hexadecimal number: ");
            scanf("%s", hexInput);
            int decimalResult = 0;
            int i;
            
            for (i = 0; hexInput[i] != '\0'; i++) {
                int digitValue = hexToDecimal(hexInput[i]);
                if (digitValue == -1) {
                    printf("Invalid hexadecimal digit: %c\n", hexInput[i]);
                    exit(1);
                }
                decimalResult = decimalResult * 16 + digitValue;
            }
            printf("The decimal equivalent is: %d\n", decimalResult);
            break;
        }
        case 4: {
            int decimalInput;
            printf("Enter a decimal number: ");
            scanf("%d", &decimalInput);
            decimalToHexadecimal(decimalInput);
            break;
        }
        case 5: {
            int octalInput;
            printf("Enter an octal number: ");
            scanf("%o", &octalInput);
            int decimalResult = octalToDecimal(octalInput);
            printf("The decimal equivalent is: %d\n", decimalResult);
            break;
        }
        case 6: {
            int decimalInput;
            printf("Enter a decimal number: ");
            scanf("%d", &decimalInput);
            decimalToOctal(decimalInput);
            break;
        }
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
