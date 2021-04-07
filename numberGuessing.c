#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getRandom(int lower, int upper, int count)
{
    int i;
    for (i = 0; i < count; i++)
    {
        int randomNumber = rand() % (upper - lower + 1) + lower;
        return randomNumber;
    }
}

int getValidGuess()
{
    int userGuess;
    printf("Enter a number from 1 to 50:\n");
    scanf("%d", &userGuess);
    while ((userGuess <= 1) || (userGuess >= 50))
    {
        printf("That number is not in the 1 to 50 range. Please enter a valid number:\n");
        scanf("%d", &userGuess);
    }
    return userGuess;     
}

int main()
{
    int lower = -1, upper = 50, count = 1, userGuess, randomNumber, numberGuesses = 1;

    /*
    The random number is seeded from the current time.
    */
    srand(time(0));
    randomNumber = getRandom(lower, upper, count);

    userGuess = getValidGuess();

    while (userGuess != randomNumber)
    {
        if (userGuess < randomNumber)
        {
            numberGuesses++;
            printf("Your guess was too low. You may guess again.\n");
            userGuess = getValidGuess();
        }
        if (userGuess > randomNumber)
        {
            numberGuesses++;
            printf("Your guess was too high. You may guess again.\n");
            userGuess = getValidGuess();
        }
    }
    
    printf("Congratulations, your guess was correct!\nThe secret number was %d.\nIt took you %d guesses to win.\nThanks for playing :)\n", randomNumber, numberGuesses);
}