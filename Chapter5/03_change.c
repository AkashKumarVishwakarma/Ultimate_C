// #include <stdio.h>

// int sum(int, int);

// int sum(int a, int b){
//     return a+b;
// }

// int main() {
//     int c =77;

//     c = sum(3,4);
//     printf("%d\n",c);

//     printf("%d\n",c);
//     return 0;
// }


// ************************************************************************

#include <stdio.h>

int change(int);
int change(int a){
    a = 77;  // Misnomer
    return 0;
}

int main() {
    int b = 22;
    change(b);     // The value of b remains
    printf("b is %d\n", b);
    
    return 0;
}