#include<stdio.h>
int main()
{
    char a,b,c;
    printf("Enter three characters: ");
    scanf("%c %c %c",&a,&b,&c);
    printf("%c=%d\n%c=%d\n%c=%d",a,a,b,b,c,c);
    return 0;
}