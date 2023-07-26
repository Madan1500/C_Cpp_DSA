// Write a program to calculate area of a rectangle.Input appropriate data from the user.
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the length and breadth of the rectangle: ");
    scanf("%d%d",&a,&b);
    printf("The area of rectangle having length %d and breadth %d is %d",a,b,a*b);
    return 0;
}