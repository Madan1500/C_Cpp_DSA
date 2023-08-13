#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if ((num % 7 == 0) && (num % 3 == 0))
    {
        printf("Number is divisible by both 7 and 3\n");
    }
    else
    {

        if ((num % 7 == 0) || (num % 3 == 0))
        {
            if (num % 7 == 0)
            {
                printf("%d is divisible by 7\n");
            }
            else
            {
                printf("%d is divisible by 3\n");
            }
        }
    }
    return 0;
}