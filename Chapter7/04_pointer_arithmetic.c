#include <stdio.h>

int main() {
//Pointer Arithmetic using intiger pointer

    // int a = 5;
    // int* ptr = &a;
    // printf("The address of a is %u\n", &a);
    // printf("The address of a is %u\n", ptr);
    // ptr++;
    // printf("The value of a is %u\n", ptr);


//Pointer Arithmetic using charactor pointer
    char a = 'd';
    char* ptr = &a;
    printf("The address of a is %u\n", &a);
    printf("The address of a is %u\n", ptr);
    ptr++;  // in this case pointer increse with one byte
    printf("The value of a is %u\n", ptr);


    return 0;
}