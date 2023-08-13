#include<stdio.h>
int main()
{
    int b,a,c;
    printf("Enter a,b,c: ");
    scanf("%d%d%d",&a,&b,&c);
    if(((b*b)-(4*a*c))/2*a>0)
        printf("Distinct and real roots");
    else if((b*b)-(4*a*c)/2*a<0)
        printf("Imaginary");
    else
        printf("Real & Equal roots");
    return 0;

}