#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers for average: ");
    scanf("%d%d%d",&a,&b,&c);
    printf("The average of %d,%d and %d is %.2f",a,b,c,(a+b+c)/3.0);
    return 0;
}