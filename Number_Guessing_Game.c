#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main () {
    int random, guess;
    int no_of_guesses = 0;
    srand(time(0));

    printf(" \nWelcome to the world of guessing numbers.\n");
    random = rand() % 100 + 1;
    // printf("The number is: %d\n", random);
    do
    {
        printf("Enter your Guess between (1 to 100): ");
        scanf("%d", &guess);
        no_of_guesses++;

        if(guess > random){
            printf("Lower Number Please!\n");
        }
        else if(guess < random){
            printf("Higher Number Please!\n");
        }
        else{
            printf("Congrats!! You have Guessed the number in %d attempts.\n", no_of_guesses);
        }
    } while (guess != random);

    printf("Bye Bye. Thank You for Playing,\n");
    printf("Developed by: Harshit Sahu\n");
    
    return 0;
}