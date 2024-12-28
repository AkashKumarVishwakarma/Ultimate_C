#include <stdio.h>

int main() {
    int a = 10;
    int *akash = &a;

    printf("%x\n",akash);
    printf("%x\n",&a);
    printf("%d\n",*akash);

    return 0;
}