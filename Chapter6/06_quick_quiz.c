#include <stdio.h>

void swap(int* x, int* y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a = 3;
    int b = 4; //a is 3 and b is 4
    printf("\tBEFOUR SWAPING\n");
    printf("the value of a is %d and value of b is %d\n", a, b);
    printf("\tAFTER SWAPING\n");
    swap(&a, &b);// now a is 4 and b is 3
    printf("the value of a is %d and value of b is %d\n", a, b);
    
    return 0;
}