#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));  
    int randomNumber = (rand() % 100) + 1; 
    int guess, attempts = 7; 
    int isGuessedCorrectly = 0;  

   
    printf("Let's play a number guessing game. \n\n");
    printf("Guess the number between 1 and 100. You have %d attempts.\n", attempts);

   
    for (int i = 1; i <= attempts; i++) {
        printf("Attempt %d/%d - Enter your guess: ", i, attempts);
        scanf("%d", &guess);

        if (guess == randomNumber) {
            printf("Congratulations! You guessed the number in %d attempts.\n", i);
            isGuessedCorrectly = 1;  
            break; 
        } 
        else if (guess > randomNumber) {
            printf("Too high! Try again.\n");
        } 
        else {
            printf("Too low! Try again.\n");
        }
    }

   
    if (!isGuessedCorrectly) {
        printf("\nYou failed to guess the number. The correct number was %d.\n", randomNumber);
        printf("Better luck next time!\n");
    }

    return 0;
}
