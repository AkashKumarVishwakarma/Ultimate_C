#include <stdio.h>
#include <string.h>

// char c = 'm';
int count = 0;
int main() {
    char str[] = "Nfsb!qj{{b!lb!mbtu!tmjdf!hibs!qf!ibj";
    for (int i = 0; i < strlen(str); i++)
    {
        if(str[i] == 'b'){
            count++;
        }
    }
    printf("%d", count);
    
    return 0;
}