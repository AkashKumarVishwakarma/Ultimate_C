#include <stdio.h>

int sum(int, int);
int sum(int a, int b){
    int x = 4;  //Sum function can not change a using x because copy of a is prividing to sum in x
    return a+b;
}

int main() {
    int a = 1, b =12;
    printf("The sum of %d and %d is %d..\n", a, b, sum(a,b));

    printf("The value of a is %d\n", a);
    
    return 0;
}