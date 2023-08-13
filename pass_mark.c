#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("Enter 5 subject marks: ");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    if((a&b&c&d&e<100)&&(a&b&c&d&e>0))
    {
    if(a<33||b<33||c<33||d<33||e<33)
    {
        printf("Fail");
    }
    else
    {
        printf("pass");
    }
    }
    else
        printf("Enter a valid number");
    return 0;
}