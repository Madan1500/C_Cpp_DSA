#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if((num>99 && num<1000)||(num>-1000 && num<-99))
    {
        printf("Three digit number");
    }
    else{
        printf("Not");
    }
    return 0;
}