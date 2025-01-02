//Write a Program to Check Whether a Number is an Armstrong Number or Not.

#include<stdio.h>

int main()
{
    int n,a,result=0,b;
    printf("Enter Number= ");
    scanf("%d",&n);
    b=n;
    while(n>0)
    {
        a=n%10;
        result= result+(a*a*a);
        n=n/10;
    }

    if(result=b)
    {
        printf("Number is Armstrong Number.");
    }
    else
    {
        printf("Number is Not Armstrong Number");
    }
}
