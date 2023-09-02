//Write a function to reverse the string.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    printf("Enter a string:\n");
    gets(str);
    strrev(str);
    printf("The reverse of string is %s.",str);
    return 0;
}