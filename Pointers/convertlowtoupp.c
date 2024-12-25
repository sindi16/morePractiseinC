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
        str++; // str[i]++ increments the next valuee char in the str and str++ this increment operator to one char to other
   }
   
}

int main()
{

    char str[] = "holberton";
     toUppercase(str);

     printf("%s\n", str);
     
     return (0);
}