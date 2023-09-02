//Write a function to transform  the string in uppercase.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    printf("Enter a string:");
    gets(str);
    for(int i=0;i<strlen(str);i++)
    {
        str[i]=toupper(str[i]);
    }
    printf("Uppercase of given string: %s",str);
    return 0;
}