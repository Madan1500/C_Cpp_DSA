#include<stdio.h>
int main()
{
    int a=12,b=15,temp;
    temp=a;
    a=b;
    b=temp;
    printf("The new values in and b are %d and %d",a,b);
    return 0;

}
