#include <stdio.h>

int main() {
    int i = 6;
    int* j = &i;
    int** k = &j;

    printf("The value of i is %d\n", i);
    printf("The value of i is %d\n", *j);
    printf("The value of i is %d\n", *(&i));
    printf("The value of i is %d\n", *(&j));
    printf("The value of i is %d\n", **(&j));  // & and * aaps mai cut jate hai......


    printf("The value of i is %d\n", k);
    printf("The value of i is %d\n", *k);
    printf("The value of i is %d\n", **k);

    return 0;
}