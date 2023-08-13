#include<stdio.h>
int main()
{
    int month_num;
    printf("Enter the month number: ");
    scanf("%d",&month_num);
    if(month_num==1)
        printf("31");
    else if(month_num==2)
        printf("28");
    else if(month_num==3)
        printf("31");
    else if(month_num==4)
        printf("30");
    else if(month_num==5)
        printf("31");
    else if(month_num==6)
        printf("30");
    else if(month_num==7)
        printf("31");
    else if(month_num==8)
        printf("31");
    else if(month_num==9)
        printf("30");
    else if(month_num==10)
        printf("31");
    else if(month_num==11)
        printf("30");
    else if(month_num==12)
        printf("31");
    else
        printf("Enter a valid month number");
    return 0;
}