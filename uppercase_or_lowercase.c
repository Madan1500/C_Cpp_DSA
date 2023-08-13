#include<stdio.h>
int main()
{
    char a;
    printf("Enter a character: ");
    scanf("%c",&a);
    if((a>64)&&(a<91))
        printf("Uppercase character");
    else if((a>96)&&(a<123))
        printf("Lower case character");
    else
        printf("enter a valid alphabetic character");
    return 0;

}