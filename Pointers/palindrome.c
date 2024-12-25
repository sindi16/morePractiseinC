#include <stdio.h>

int isPalindrome(char *str)
{

    int start, end, length;
    start = 0;
    end = length - 1;
    
    while (start < end)
    {
        if (str[start] != str[end])
        {
            return (0);
        }
        start++;
        end--;
   }

    return (1);

}

int main()
{
    char str[] = "madam";
    printf("The word is palindrome: %d\n", isPalindrome(str));

}
