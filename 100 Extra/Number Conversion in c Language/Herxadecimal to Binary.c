#include <stdio.h>

void hexToBinary(char hexDigit) {
    printf("%04d", hexDigit - (hexDigit <= '9' ? '0' : 'A' - 10));
}

int main() {
    char hexInput[100];
    printf("Enter a hexadecimal number: ");
    scanf("%s", hexInput);

    printf("The binary equivalent is: ");
    int i;
    for (i = 0; hexInput[i] != '\0'; i++) {
        hexToBinary(hexInput[i]);
    }

    printf("\n");

    return 0;
}
