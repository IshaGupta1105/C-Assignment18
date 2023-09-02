//Write a function to transform the string in lowercase.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    printf("Enter the string:");
    gets(str);
    for(int i=0;i<strlen(str);i++)
    {
        str[i]=tolower(str[i]);
    }
    printf("Lowercase of given string is %s.",str);
    return 0;
}