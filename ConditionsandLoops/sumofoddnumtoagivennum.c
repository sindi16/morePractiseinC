#include <stdio.h>

int main()
{
    int i, num, sum;
    sum = 0;
    printf("Please enter your number: \n");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        if (num >= 0)
        {
            if (i % 2 != 0)
            {
                sum += i;
                printf("%d\n", sum);
            }
        }
    }
    return (0);
}