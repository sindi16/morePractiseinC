#include <stdio.h>

void reverseWords(char *str)
{
    int count, start, end, tmp;

    count = 0;
    while (str[count] != '\0')
        count++;

    start = 0;
    end = count - 1;

    while (start < end)
    {
        tmp = str[start];
        str[start] = str[end];
        str[end] = tmp;
        start++;
        end--;
    }
}

int main()
{
    char str[] = "Hello Holberton School";
    reverseWords(str);
    printf("%s\n", str);
    return (0);
}