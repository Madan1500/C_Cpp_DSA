#include<stdio.h>
int main()
{
    int P;
    float T,R;
    printf("Enter the principal amount,time and rate of interest: ");
    scanf("%d%f%f",&P,&T,&R);
    printf("Simple Interest is %.2f",(P*T*R)/100);
    return 0;
}