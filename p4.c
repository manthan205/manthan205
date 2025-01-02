//Write a Program to Calculate the Lowest Common Multiple (LCM) of Two Number.

#include <stdio.h>

int gcd(int a, int b)
{
    int temp;
    while(b!=0)
    {
        temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}

int lcm(int a,int b)
{
    return (a*b)/gcd(a,b);
}

int main()
{
    int a,b,result;
    printf("Enter Two Number: ");
    scanf("%d %d",&a ,&b);

    result=lcm(a,b);
    printf("LCM is Two Number is : %d",result);

    return 0;
}
