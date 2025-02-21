#include<stdio.h>
int main ()
{
    int n;
    scanf("%d", &n);
    if(n>=1 && n<=7)
    {
        switch(n)
    {
        case 1:
        printf("Start the week with some exercise");
        break;
        case 2:
        printf("Read the new book");
        break;
        case 3:
        printf("Mis week movie night");
        break;
        case 4:
        printf("try cooking a new recipe");
        break;
        case 5:
        printf("Hang out with friends");
        break;
        case 6:
        printf("Go for a hike or outdoor activity");
        break;
        case 7:
        printf("Relax and prepare for the week ahead");
        break;
    }
    }
    else 
    {
        printf("Invalid day . Pleaxe enter a number between 1 and 7");
    }
    return 0;
}