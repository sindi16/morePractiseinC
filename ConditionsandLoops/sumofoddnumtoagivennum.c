#include <stdio.h>

int main()
{
    int i, num, sum;
    printf("Please enter your number: \n");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        if (num >= 0 && num % 2 != 0)
        {
            sum += num;
            printf("%d", sum);
            
        }
    }
    return (0);
}