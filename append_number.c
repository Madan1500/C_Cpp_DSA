#include<stdio.h>
int main()
{
    int num,n;
    printf("Enter a number and a single digit for append: ");
    scanf("%d %d",&num,&n);
    printf("Appending %d and %d becomes %d",num,n,((num/10)*10)+n);
    return 0;
}