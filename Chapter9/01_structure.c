#include <stdio.h>
#include <string.h>

struct employee {
    int code;   // This declares a new user defined data type!
    float salary;
    char name[10];
}; // Semicolon is important

int main() {
    struct employee e1, e2;   // Creating a structure variable
    e1.code = 101;
    // e1.name = "Harry";
    strcpy(e1.name, "Harry");
    e1.salary = 54.44;

    printf("%d %f %s", e1.code, e1.salary,e1.name);
    
    return 0;
}