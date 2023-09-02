//WRITE a function to check whether the given string is alphanumeric or not.
#include<stdio.h>
int isAlphanumeric(char ch)
{
    if((ch>='0' && ch<='9')||(ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))
    return 1;
    else
    return 0;
}
int main()
{
    char ch;
    printf("Enter the string:");
    scanf("%s",&ch);
    
    if(isAlphanumeric(ch))
         printf("Given string is alphanumeric");
    else
            printf("Given string is not alphanumeric");  
    return 0; 
}