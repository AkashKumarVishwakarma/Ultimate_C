#include <stdio.h>

int main() {
    int a =4;
    int b =8;
    int c = a+b;

    printf("The value of a is %d and value of b is %d and sum is %d..\n", a, b, c);
    printf("The remainder when a is divided by b is: %d..\n", a%b);
    printf("%d\n",-5%2);
    printf("%d\n",-5%-2);
    printf("%d\n",5%-2);

    //This does not work for exponentiation in c
    // int d = a^b;
    
    return 0;
}