#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    if(num/2*2==num)
    {
        printf("Even");
    }
    else    
        printf("Odd");
    return 0;
}