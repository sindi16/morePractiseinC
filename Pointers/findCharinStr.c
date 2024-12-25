#include <stdio.h>

int findCharacter(char *str, char letter)
{
    int i;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'letter')
        {
            return (i);
        }
    return (-1);
    }
}

int main()
{
    char str[] = "Programming is awesome";
    printf("the positon of char is: %d", findCharacter(str, 'a'));
    return (0);
}