#include <stdio.h>

void printArray(int*, int);
// void printArray(int a[], int n){
void printArray(int* ptr, int n){
    for (int i = 0; i < n; i++)
    {
        // printf("%d ", a[i]);
        printf("%d ", ptr[i]);
    }
    printf("\n");
}

void reverse(int*, int);
void reverse(int* ptr, int n){
    /* for i from 0 to n/2
        arr[i] arr[n-i-1]
    */
    int temp;
    for (int i = 0; i < n/2; i++)
    {
        temp = ptr[i];
        ptr[i] = ptr[n-i-1];
        ptr[n-i-1] = temp;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    printArray(arr, 6);

    reverse(arr, 6);
    printArray(arr, 6);

    return 0;
}