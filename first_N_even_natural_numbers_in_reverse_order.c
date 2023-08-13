#include<stdio.h>
int main() 
{
    int i;
    printf("Enter a number: ");
    scanf("%d",&i);
    while(i>0)
    {
        printf("%d ",(2*i--));
    }
    return 0;

}