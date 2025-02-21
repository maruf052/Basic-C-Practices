#include<stdio.h>
#include<string.h>
int ispalindrome(char str[])
{
    for(int i=0;i<strlen(str)/2;i++)
    {
        if(str[i]!=str[strlen(str)-1-i])
        {
            return 0;
        }
    }
    return 1;
}
int main ()
{
    char t[100];
    printf("Enter a string to check if its a palindrome : ");
    scanf("%s", t);
    if(ispalindrome(t))
    {
        printf("This is a palindrome.");
    }
    else
    {
        printf("This is not a palindrome.");
    }
    return 0;
}