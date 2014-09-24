#include <stdio.h>
#include <string.h>

int main()
{
    char str[10];
    printf("Enter name of the card\n");
    scanf("%s", &str);
    if (strcmp(str, "J") == 0 || strcmp(str, "Q") == 0 || strcmp(str, "K") == 0 || strcmp(str, "10") == 0)
        printf("10\n");
    else if (strcmp(str, "A") == 0)
        printf("11\n");
    else if (strlen(str) == 1 && str[0] >= '2' && str[0] <= '9')
        printf("%s", &str);
    else
        printf("No such card");
}