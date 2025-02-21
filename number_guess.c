#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void provideHint(int guess, int magicnum)
{
    if(guess<magicnum)
    {
        printf("Too low! Try again.\n");
    }
    else if(guess>magicnum)
    {
        printf("Too high! Try again.\n");
    }
    else
    {
        printf("Correct! You guessed the magic number. ");
    }
}
int main ()
{
    int magicnum,guess;
    srand(time(0));
    magicnum=rand()%100+1;
    printf("Welcome to thr Magic Number Game!");
    scanf("I have choosen a magic number bbetween 1 and 100. Can you guess what it is ?\n");
    do
    {
        printf("Enter your guess : ");
        scanf("%d", &guess);
        provideHint(guess,magicnum);
    }
    while(guess!=magicnum);
    printf("Thanks for playing!");
    return 0;
}