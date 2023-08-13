#include<stdio.h>
int main()
{
    int hundred,tenth,temp,a;
    printf("Enter a three digit number: ");
    scanf("%d",&a);
    int unit=a%10;
    temp=a/10;
    tenth=temp%10;
    hundred=temp/10;
    printf("Sum of three digit is %d",hundred+tenth+unit);
    return 0;

}