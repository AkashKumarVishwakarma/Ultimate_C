#include <stdio.h>

int sum_natural(int);
int sum_natural(int n){
    // sum(n) = 1+2+3+4+5+6+.......+n-1 + n;
    // sum(n-1) = 1+2+3+......+n-1;

    // sum(n) = sum(n-1) + n;
    if(n == 1){
        return 1;
    }
    return sum_natural(n-1) + n;
}

int main() {
    int n = 5;
    printf("The sum of first %d natural number is %d\n", n, sum_natural(n));
    
    return 0;
}