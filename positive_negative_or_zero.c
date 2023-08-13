#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num>0)
        printf("%d is a positive number",num);
    else if(num<0)
        printf("%d is negative number",num);
    else
        printf("NUMBER IS ZERO");
    return 0;
}