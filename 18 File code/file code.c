#include <stdio.h>

int main() {
    FILE *sourceFile, *destinationFile;
    char ch;

    // Open the source file in binary read mode
    sourceFile = fopen("source.txt", "rb");

    // Check if the source file opened successfully
    if (sourceFile == NULL) {
        printf("Error opening source file");
        return 1;
    }

    // Open the destination file in binary write mode
    destinationFile = fopen("destination.txt", "wb");

    // Check if the destination file opened successfully
    if (destinationFile == NULL) {
        printf("Error opening destination file");
        fclose(sourceFile);
        return 2;
    }

    // Copy content from source to destination
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destinationFile);
    }

    // Close both files
    fclose(sourceFile);
    fclose(destinationFile);

    printf("File copied successfully.\n");

    return 0;
}
