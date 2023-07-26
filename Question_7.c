// Write a program to calculate sum of two integers.Numbers are taken fom the user through keyboard.
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers for addition: ");
    scanf("%d%d",&a,&b);
    printf("The sum of %d and %d is %d",a,b,a+b);
    return 0;
}