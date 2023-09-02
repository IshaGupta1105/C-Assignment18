//Write a function to find the repeated characters in agiven string.
#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    printf("Enter a string:");
    gets(a);
    int hash[256]={0};
       for(int i=0;a[i]!='\0';i++)
       {
        hash[a[i]]++;
       }
       for(int i=0;i<256;i++)
       {
        if(hash[i]>0)
          printf("The character %c is repeated %d times.\n",i,hash[i]);
       }
    return 0;
}