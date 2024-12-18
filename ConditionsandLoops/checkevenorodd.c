#include <stdio.h>

int main()
{
    int num;
    printf("Please enter your number: \n");
    scanf("%d", &num);

    //Check if the number is even or odd. 
    if (num % 2 == 0)
    {
        printf("Number %d is even\n", num);
    }
    else
    {
        printf("Number %d is odd\n", num);
    }
    
    return (0);
}