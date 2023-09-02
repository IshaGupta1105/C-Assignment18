//Write a function to count words in a given string.
#include<stdio.h>

int main()
{
    char a[]="My name is Isha Gupta";
    int count=0,i;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
         count++;
    }
    count++;
    printf("Number of words= %d",count);
    return 0;
}