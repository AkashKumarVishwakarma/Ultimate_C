#include <stdio.h>

float c2f(float);
    float c2f(float c){
        return ((9*c)/5.0)+32;

    }

int main() {

    float c = 13;
    printf("Celsius to Fahrenheight for %.2f is %.3f",c, c2f(c));
    
    return 0;
}