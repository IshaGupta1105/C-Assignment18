//Write a function to reverse a string word wise.(For eg isha gupta res:gupta isha)
#include<stdio.h>
void reverse(char*name, int start, int end)
{
    int i,j;
    for(i=start,j=end;i<=j;i++,j--)
    {
        char temp=name[i];
        name[i]=name[j];
        name[j]=temp;
    }
}
int main()
{
    char name[]="Isha Gupta";
    int i,j,nullFound=0;
    for(i=0,j=0;name[j]!='\0';)
    {
        while(name[j]!=' ')
        {
            if(name[j]=='\0')
            {
                nullFound=1;
                break;
            }
            j++;
        }
    reverse(name,i,j-1);
    i=j+1;
      if(nullFound==0)
         j++;
    }
    reverse(name,0,j-1);
    printf("%s",name);
    return 0;
}