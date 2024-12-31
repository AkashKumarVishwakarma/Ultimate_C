#include <stdio.h>
#include <string.h>

int main()
{
    int contains = 0;
    char str[] = "Nfsb!qj{{b!lb!mbtu!tmjdf!hibs!qf!ibj";
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == 'a')
        {
            contains = 1;
            break;
        }
    }
    if (contains)
    {
        printf("Yes it Contains \n");
    }
    else
    {
        printf("Does not contain \n");
    }

    return 0;
}