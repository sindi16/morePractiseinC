#include <stdio.h>


int main()
{
    int num;
    for (num = 1; num <= 30; num++)
    {
        if (num % 3 == 0)
        {
            printf("%d\n", num);
        }
    }
    return (0);
}