#include <stdio.h>

int main()
{
    char* password[15];
    char* correct_password[] = "1234"
    printf("Please enter your password: ");
    scanf("%s", &password);

    if (password[0] == '1' && password[1] == '2' && password[2] == '3' && password[3] == '4' && password[4] == '\0')
    {
        printf("Access granted\n");
    }
    else 
    {
        printf("Access denied\n");
    }
    return (0);
}