#include <stdio.h>

long long factorial(int num) {
    if (num < 0) { // Handle negative input
        printf("Factorial of a negative number is undefined.\n");
        return -1; // Return -1 to indicate an error
    }
    if (num == 1 || num == 0) { // Base condition
        return 1;
    }
    return factorial(num - 1) * num;
}

int main() {
    int a;
    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &a);

    long long result = factorial(a);
    if (result != -1) { // Only print result for valid input
        printf("The Factorial of %d is %lld\n", a, result);
    }
    return 0;
}


/*
#include <stdio.h>
#define MAX 500

// Function to multiply a number with the factorial result stored in an array
int multiply(int x, int res[], int res_size) {
    int carry = 0; // Initialize carry

    // Multiply x with res[] and update res[]
    for (int i = 0; i < res_size; i++) {
        int prod = res[i] * x + carry;
        res[i] = prod % 10; // Store last digit of the product
        carry = prod / 10;  // Update carry
    }

    // Store remaining carry in res[]
    while (carry) {
        res[res_size] = carry % 10;
        carry = carry / 10;
        res_size++;
    }

    return res_size;
}

// Function to calculate factorial of a number
void factorial(int num) {
    int res[MAX];
    res[0] = 1; // Initialize result
    int res_size = 1;

    // Multiply numbers from 2 to num
    for (int x = 2; x <= num; x++) {
        res_size = multiply(x, res, res_size);
    }

    // Print the result in reverse order
    printf("The Factorial of %d is: ", num);
    for (int i = res_size - 1; i >= 0; i--) {
        printf("%d", res[i]);
    }
    printf("\n");
}

int main() {
    int a;
    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &a);

    if (a < 0) {
        printf("Factorial of a negative number is undefined.\n");
    } else {
        factorial(a);
    }
    return 0;
}

*/
