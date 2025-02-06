#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int hiding_spot, guess;
    char play_again;

    // Seed the random number generator
    srand(time(0));

    do {
        // Computer chooses a random hiding spot (1-10)
        hiding_spot = rand() % 10 + 1;

        printf("Welcome to Hide and Seek!\n");
        printf("I'm hiding somewhere between 1 and 10. Can you find me?\n");

        do {
            printf("Enter your guess (1-10): ");
            scanf("%d", &guess);

            if (guess < 1 || guess > 10) {
                printf("Please enter a number between 1 and 10.\n");
            } else if (guess < hiding_spot) {
                printf("Too low! Try again.\n");
            } else if (guess > hiding_spot) {
                printf("Too high! Try again.\n");
            } else {
                printf("You found me! Great job!\n");
            }
        } while (guess != hiding_spot);

        printf("Do you want to play again? (y/n): ");
        scanf(" %c", &play_again);  // Note the space before %c to consume any leftover newline character

    } while (play_again == 'y' || play_again == 'Y');

    printf("Thanks for playing! Goodbye!\n");

    return 0;
}