#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number to check wheather a number is divisible by 5 or not: ");
    scanf("%d",&num);
    if(num%5)
        printf("No");
    else
        printf("Yes");
    return 0;
}