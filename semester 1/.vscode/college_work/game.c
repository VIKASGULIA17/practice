#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num, guess, attempts = 0;

    // Use current time as seed for random generator
    srand(time(0));

    // Generate a random number between 1 and 100
    num = rand() % 100 + 1;

    printf("Guess a number between 1 and 100: ");

    // Game loop
    do {
        scanf("%d", &guess);
        attempts++;

        if(guess > num) {
            printf("Lower! Try again: ");
        }
        else if(guess < num) {
            printf("Higher! Try again: ");
        }
    } while(guess != num);

    printf("Congratulations! You found the number in %d attempts.\n", attempts);

    return 0;
}