// Write a Program to Find the Length of the String Without using strlen() Function.

#include<stdio.h>
int main()
{
    char a[100];
    int i,len=0;
    printf("Enter a String: ");
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        len++;
    }
    printf("string lenght is : %d ",len);
    return 0;
}
