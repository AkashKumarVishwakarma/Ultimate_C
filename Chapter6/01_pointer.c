#include <stdio.h>

int main() {
    // int i = 72;
    // printf("%u\n",&i);
    // int j = 23;
    // printf("%u\n",&j);
    // int k = 23;
    // printf("%u\n",&k);
    // int l = 23;
    // printf("%u\n",&l);
    // int m = 23;
    // printf("%u\n",&m);
    // m = 44;
    // printf("%u\n",&m);


    int a = 72;
    int* b = &a;
    int c = 67;
    printf("The address of a is %p\n", &a);
    printf("The address of a is %p\n", b);
    printf("The address of b is %p\n", &b);

    printf("The value at address b is %d\n", *b);
    printf("The value at address b is %d\n", *(&a));
    printf("The value at address b is %d\n", *(&b));
    printf("The value at address b is %d\n", (&b));


    return 0;
}