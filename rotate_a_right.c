#include<stdio.h>
int main()
{
    int num,h,t,o;
    printf("Enter a three digit number: ");
    scanf("%d",&num);
    o=num%10;
    int temp=num/10;
    t=temp%10;
    h=temp/10;
    printf("%d",(o*100)+(h*10)+(t));
    return 0;
}