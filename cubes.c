#include<stdio.h>
int main()
{
    int i,j=1;
    printf("Enter a number: ");
    scanf("%d",&i);
    while(i>0)
    {
        printf("%d ",j*j*j);
        j++;
        i--;
    }
    return 0;

}