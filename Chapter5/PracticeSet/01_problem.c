#include <stdio.h>

float avg(int, int, int);
float avg(int a, int b, int c){
    return (a+b+c)/3.0;
}

int main() {
    int a = 6, b = 5, c = 12;

    float result = avg(a, b, c);

    printf("The average of %d, %d and %d are %.2f", a, b, c, result);
    
    return 0;
}