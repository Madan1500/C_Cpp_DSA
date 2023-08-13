#include<stdio.h>
int main()
{
    float inr,usd;
    printf("Enter the inr amount to see in usd: ");
    scanf("%f",&inr);
    printf("%.2f rupees is equal with $%.4f",inr,((1/84.23)*inr));
    return 0;

}