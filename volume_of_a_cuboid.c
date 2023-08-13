#include<stdio.h>
int main()
{
    float l,b,h;
    printf("Enter the length,breadth and height of the cuboid: ");
    scanf("%f%f%f",&l,&b,&h);
    printf("Volume of the cuboid is %.2f unit cube",l*b*h);
    return 0;
}