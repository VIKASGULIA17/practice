#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char hex[17];
    long int decimal, binary;
    int i = 0;

    printf("Enter a hexadecimal number: ");
    scanf("%s", hex);

    decimal = strtol(hex, NULL, 16);
    binary = 0;

    while (decimal > 0) {
        binary += (decimal % 2) * (1 << i);
        decimal /= 2;
        i++;
    }

    printf("The binary equivalent of %s is %ld.\n", hex, binary);

    return 0;
}
