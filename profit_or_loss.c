#include<stdio.h>
int main()
{
    int n;
    float sp,profit,loss,cp;
    printf("Enter the Cost price and Selling price of a dozen banana: ");
    scanf("%f%f",&cp,&sp);
    printf("Numbe of bananas you sold: ");
    scanf("%d",&n);
    if(sp>cp)
        printf("The profit is %.2f",n*(sp-cp)/12);
    else
        printf("Loss is %.2f",n*(cp-sp)/12);
    return 0;

}