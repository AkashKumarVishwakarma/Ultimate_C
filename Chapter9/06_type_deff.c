#include <stdio.h>
#include <string.h>

typedef struct employee
{
    int code;
    float salary;
    char name[10];
} Emp;

int main()
{

    /*
    typedef int harry;
    harry a = 88;
    // int a = 88; // both line have same meaning
    printf("The value of a is %d \n", a);
    */

    // struct employee e1;

    // typedef struct employee Emp;  // use if not declare with function
    Emp e1;
    Emp* ptr1 = &e1;

    e1.code = 4511;
    strcpy(e1.name, "Akash");
    e1.salary = 90.99;

    printf("%d %f %s\n", e1.code, e1.salary, e1.name);
    printf("%d %f %s\n", ptr1->code, ptr1->salary, ptr1->name);

    return 0;
}