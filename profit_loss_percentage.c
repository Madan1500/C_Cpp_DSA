#include<stdio.h>
int main()
{
    float cp,sp;
    printf("Enter cost Price and Selling Price of product: ");
    scanf("%f%f",&cp,&sp);
    if(sp>cp)
    {
        printf("profit is rupees %f",(sp-cp)/cp*100);
    }
    else
        printf("loss is rupees %f",(cp-sp)/cp*100);
    return 0;

}