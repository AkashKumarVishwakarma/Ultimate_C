#include <stdio.h>

int main() {
    int marks[] = {12, 34, 53, 66};

    // int* ptr = &marks[0];
    int* ptr = marks; // Same as int* ptr = &marks[0];
    for (int i = 0; i < 4; i++)
    {
        printf("The marks at index %d is %d\n", i, marks[i]);
        printf("The marks at index %d is %d using ptr\n", i, *ptr);
        ptr++;
    }
    
    // printf("%d\n",*ptr);
    // ptr++;
    // printf("%d\n",*ptr);

    return 0;
}