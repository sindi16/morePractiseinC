#include <stdio.h>

void toUppercase(char *str)
{
    int i;
   while (str[i] != '\0')
   {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        str++;
   }
   
}

int main()
{

    char str[] = "holberton";
     toUppercase(str);

     printf("%s\n", str);
     
     return (0);
}