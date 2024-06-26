#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    const int MIN = 1;
    const int MAX = 100;
    int guess;
    int guesses = 0;
    int answer;

    srand(time(0)); // uses current time as seed

    // generate a random number between MIN and MAX
    answer = (rand() % MAX) + MIN;

    // it is going to take alteast one guess to guess to correct answer.
    // so we are using a do while loop
    printf("%d\n", answer);
    printf("Enter a guess (< %d):", MAX);
    scanf("%d", &guess);
    guesses += 1;

    do
    {
        if (guess > answer)
        {
            printf("Too high!:");
            scanf("%d", &guess);
            guesses++;
            continue;
        }
        else if (guess < answer)
        {
            printf("Too Low!:");
            scanf("%d", &guess);
            guesses++;
            continue;
        }
        else
        {
            printf("CORRECT!\n");
        }
    } while (guess != answer);
    printf("********************************");

    printf("\nIt took you %d guesses!\n", guesses);
    printf("********************************\n");

    return 0;
}