#include <stdio.h>

int main() {
    int a;
    printf("Enter a:");
    scanf("%d", &a);

    switch(a){
        case 1:
            printf("You entered One");
            break;
        case 2:
            printf("You entered Two");
            break;
        case 3:
            printf("You entered Three");
            break;
        case 4:
            printf("You entered Four");
            break;
        case 5:
            printf("You entered Five");
            break;
        case 6:
            printf("You entered Six");
            break;
        case 7:
            printf("You entered Seven");
            break;
        default:
            printf("Not under 1 - 7");
        
    }
    return 0;
}