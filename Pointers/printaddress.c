#include <stdio.h>

int main()
{
    int age = 18;
    int *ptr = &age;

    //Print the address of age
     printf("The address of age is: %p\n", ptr);
    return (0);
}