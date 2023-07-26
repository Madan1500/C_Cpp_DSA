// WAP to calculate area of the circle.Take radius of circle from the user as input.
#include<stdio.h>
int main()
{
    int r;
    const float pi=3.14;
    printf("Enter the radius of the citcle: ");
    scanf("%d",&r);
    printf("The area of the circle having radius %d is %.2f",r,pi*r*r);
    return 0;

}