#include <stdio.h>

void readBinaryFile(FILE *file) {
    int data;

    fseek(file, 0, SEEK_SET);

    while (fread(&data, sizeof(int), 1, file) == 1) {
        printf("Data read: %d\n", data);
    }
}

void writeBinaryFile(FILE *file) {
    int data[] = {10, 20, 30, 40, 50};

    fseek(file, 0, SEEK_SET);

    for (int i = 0; i < 5; i++) {
        fwrite(&data[i], sizeof(int), 1, file);
    }
}

int main() {
    FILE *file;
    int option;

    file = fopen("file.bin", "rb+");

    if (file == NULL) {
        printf("Error: File could not be opened.\n");
        return 1;
    }

    printf("Enter 1 to read binary file.\n");
    printf("Enter 2 to write binary file.\n");
    printf("Enter 3 to perform I/O and file positioning operations on binary files.\n");
    printf("Enter your choice: ");
    scanf("%d", &option);

    switch (option) {
        case 1:
            readBinaryFile(file);
            break;
        case 2:
            writeBinaryFile(file);
            break;
        case 3:
            printf("File position: %ld\n", ftell(file));

            fseek(file, 10, SEEK_SET);
            printf("File position after fseek: %ld\n", ftell(file));

            fseek(file, -4, SEEK_CUR);
            printf("File position after fseek: %ld\n", ftell(file));

            rewind(file);
            printf("File position after rewind: %ld\n", ftell(file));
            break;
        default:
            printf("Invalid option.\n");
            break;
    }

    fclose(file);

    return 0;
}