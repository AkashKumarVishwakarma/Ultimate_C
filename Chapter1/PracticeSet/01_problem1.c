#include <stdio.h>

int main() {
    int length,width;

    printf("Enter length \n");
    scanf("%d",&length);

    printf("Enter width \n");
    scanf("%d",&width);
    
    printf("The area of this rectangle is %d..", length*width);
    return 0;
}