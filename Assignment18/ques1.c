//WRITE A FUNCTION TO FIND THE LENGTH OF STRING.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    int length;
    printf("Enter the string:\n");
    gets(str);
    length=strlen(str);
    printf("The length of the entered string is %d",length);
    return 0;
}