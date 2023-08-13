#include<stdio.h>
int main()
{
    char a;
    printf("Enter anything: ");
    scanf("%c",&a);
    if((a>64)&&(a<91))
        printf("Uppercase character");
    else if((a>96)&&(a<123))
        printf("Lower case");
    else if((a>48)&&(a<58))
        printf("%c is a digit",a);
    else
        printf("This is a special character");
    return 0;

}