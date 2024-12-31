#include <stdio.h>
#include <string.h>

struct employee{
    int code;
    float salary;
    char name[10];
};


void show(struct employee e){
    printf("code is %d\nSalary is %f\nName is %s\n", e.code, e.salary, e.name);

}

int main() {
    struct employee e1;
    e1.code = 56;
    strcpy(e1.name, "Akash");
    e1.salary = 54.98;

    show(e1);    
    return 0;
}