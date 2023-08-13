#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("The l;ast digit of the number is %d",a%10);
    return 0;
}