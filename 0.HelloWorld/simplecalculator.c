#include <stdio.h>

/**
*
*/

int main()
{
    int x, y;
    x = 10;
    y = 3;
    int sum = x + y;
    int diff = x - y;
    int multiplie = x * y;
    int division = x / y;

    printf("My First Calculator\n");
    printf("%d + %d = %d\n", x, y, sum);
    printf("%d - %d = %d\n", x, y, diff);
    printf("%d * %d = %d\n", x, y, multiplie);
    printf("%d / %d = %d\n", x, y, division);

    printf("It is great to be a programmer");
    return (0);
}