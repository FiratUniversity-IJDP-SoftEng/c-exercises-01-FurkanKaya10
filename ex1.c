#include <stdio.h>

int main() {
    int guess;
    int secretNumber; 
    secretNumber = 3;

    printf("Guess a number between 1 and 5: ");
    scanf("%d", &guess);

    if (guess == secretNumber) {
        printf("right number: %d\n", secretNumber);
    } else {
        printf("wrong number. The correct number was: %d\n", secretNumber);
    }

    return 0;
}
