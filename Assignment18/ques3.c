//Write a function to compare two string
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20],str2[20];
    int value;
    printf("Enter the str1=\n");
    gets(str1);
    printf("Enter the str1=\n");
    gets(str2);
    value=strcmp(str1,str2);
    if(value==0)
        printf("String are same");
    else
        printf("Strings are not same");
    return 0;
}