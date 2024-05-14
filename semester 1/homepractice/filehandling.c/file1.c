#include <stdio.h>
#include<stdlib.h>

int main() {
    int num, count = 0;
    FILE *EvenFile, *OddFile;

    EvenFile = fopen("EvenFile.txt", "w");
    OddFile = fopen("OddFile.txt", "w");

    if (EvenFile == NULL || OddFile == NULL) {
        printf("Error! Unable to create files.");
        exit(1);
    }

    printf("Enter 20 numbers:\n");

    for (int i = 0; i < 20; i++) {
        scanf("%d", &num);

        if (num % 2 == 0) {
            fprintf(EvenFile, "%d\n", num);
        } else {
            fprintf(OddFile, "%d\n", num);
        }
    }

    fclose(EvenFile);
    fclose(OddFile);

    printf("Numbers saved in EvenFile.txt and OddFile.txt successfully.\n");

    return 0;
}