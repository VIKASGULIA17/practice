#include <stdio.h>
#include<stdlib.h>

int main() {
    int num, count = 0;
    FILE *file1, *file2;

    file1 = fopen("file1.txt", "w");
    file2 = fopen("file2.txt", "w");

    if (file1 == NULL || file2 == NULL) {
        printf("Error! Unable to create files.");
        exit(1);
    }

    printf("Enter 20 numbers:\n");

    for (int i = 0; i < 20; i++) {
        scanf("%d", &num);

        if (num % 2 == 0) {
            fprintf(file1, "%d\n", num);
        } else {
            fprintf(file2, "%d\n", num);
        }
    }

    fclose(file1);
    fclose(file2);

    printf("Numbers saved in file1.txt and file2.txt successfully.\n");

    return 0;
}