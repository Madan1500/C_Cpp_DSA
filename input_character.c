#include<stdio.h>
int main()
{
    char a;
    printf("Enter a character to see it's ASCII code: ");
    scanf("%c",&a);
    printf("ASCII code of '%c' is : %d",a,a);
    return 0;
}