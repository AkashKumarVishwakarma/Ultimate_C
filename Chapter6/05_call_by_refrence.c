#include <stdio.h>

int sum(int*, int*);

//Sum should change the value of x
int sum(int* a, int* b){
    *a = 6;
    return *a + *b;
}

int main() {
    int x = 1, y =12;
    printf("The sum of %d and %d is %d..\n", x, y, sum(&x, &y));
    printf("The value of a is %d\n", x);
    
    return 0;
}