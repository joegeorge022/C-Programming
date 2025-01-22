#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    const int MIN = 1;
    const int MAX = 100;
    int guess;
    int guesscount = 0;
    int answer;

    // uses current time as seed for random generator
    srand(time(0));

    // generates random number between 1 and 100
    answer = (rand() % MAX ) + MIN;

    do{
        printf("Enter a guess: ");
        scanf("%d",&guess);
        if(guess>answer){
            printf("Too High \n");
            guesscount++;
            printf("Guess Count: %d \n",guesscount);
        }
        else if(guess<answer){
            printf("Too Low \n");
            guesscount++;
            printf("Guess Count: %d \n",guesscount);
        }
        else{
            printf("%d is CORRECT!!\n",answer);
            printf("Guess Count: %d \n",guesscount);
        }

    }while(guess!=answer);
}
