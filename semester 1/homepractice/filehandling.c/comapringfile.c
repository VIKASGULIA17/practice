#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    FILE *file1, *file2;
    char ch1, ch2;

    if (argc != 3) {
        printf("Usage: %s file1 file2\n", argv[0]);
        exit(1);
    }

    file1 = fopen(argv[1], "r");
    if (file1 == NULL) {
        printf("Cannot open file %s\n", argv[1]);
        exit(1);
    }

    file2 = fopen(argv[2], "r");
    if (file2 == NULL) {
        printf("Cannot open file %s\n", argv[2]);
        exit(1);
    }

    while ((ch1 = fgetc(file1)) != EOF) {
        ch2 = fgetc(file2);

        if (ch1 != ch2) {
            printf("Files %s and %s are not equal.\n", argv[1], argv[2]);
            fclose(file1);
            fclose(file2);
            exit(0);
        }
    }

    ch2 = fgetc(file2);
    if (ch2 != EOF) {
        printf("Files %s and %s are not equal.\n", argv[1], argv[2]);
    } else {
        printf("Files %s and %s are equal.\n", argv[1], argv[2]);
    }

    fclose(file1);
    fclose(file2);

    return 0;
}