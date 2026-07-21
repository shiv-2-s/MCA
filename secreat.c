#include <stdio.h>

int main()
{
    int secret = 25;
    int guess, count = 0;

    do
    {
        printf("Guess the secret number (20-30): ");
        scanf("%d", &guess);

        count++;

        if(guess == secret)
        {
            printf("Congratulations! You guessed the correct number.\n");
            printf("Number of attempts = %d\n", count);
        }
        else
        {
            printf("Wrong guess! Try again.\n");
        }

    } while(guess != secret);

    return 0;
}