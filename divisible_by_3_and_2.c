#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if((num%3)&&(num%2))
    {
        printf("Not divisible by 3 and 2");
    }
    else
    {
        printf("Divisible by 3 and 2");
    }
    return 0;
}