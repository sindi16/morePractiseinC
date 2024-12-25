#include <stdio.h>

int findCharacter(char *str, char letter)
{
    int i;
    letter = c;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'c')
        {
            return(letter[i]);
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