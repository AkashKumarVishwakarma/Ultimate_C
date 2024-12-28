#include <stdio.h>

int main() {
    int a=0; int b=1;
    printf("The value of a and b is %d\n", a&&b);
    printf("The value of a or b is %d\n", a||b);
    printf("The value of not(a) is %d\n", !a);
    printf("The value of not(b) is %d\n", !b);

    if(a && b){
        printf("both are true\n");
    }
    // is same as writing ..........
    if(a){
        if(b){
            printf("both are true");
        }
    }
    return 0;
}