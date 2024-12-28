#include <stdio.h>

int main() {
    int a = 2;
    int* b = &a;

    printf("The value of a %d\n", a);
    printf("The address of a %u\n", &a);
    printf("The address of a %u\n", b);
    printf("The value of a %u\n", *b);

    printf("The address of b %u\n", &b);
    printf("The value of b %u\n", b);
    printf("The value of b %u\n", *(&b));
    printf("The value of a %u\n", *(&a));
    return 0;
}