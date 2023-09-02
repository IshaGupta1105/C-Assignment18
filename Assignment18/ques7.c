//Write a function to check whether given string is pallindrome or not.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[30],reversestr[30];
    printf("Enter the string:");
    gets(str);
    strcpy(reversestr,str);
    strrev(reversestr);
    if(strcmp(str,reversestr)==0)
        printf("It is pallindrome.");
    else
        printf("It is not pallindrome.");
    return 0;
}