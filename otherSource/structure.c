#include <stdio.h>

int main() {
    struct student{
        int id;
        char name[7];
        float marks;
    };
    struct student akash, vikash, sunny;

    akash.id = 1;
    // akash.name = "saloon";
    akash.marks = 100;
    
    vikash.id = 2;
    // vikash.name = "bakke";
    vikash.marks = 97.3;

    sunny.id = 3;
    // sunny.name = "kaju";
    sunny.marks = 89.57;

    printf("which id %d Nik-Name is  and marks are %.2f\n", akash.id, akash.marks);
    printf("which id %d Nik-Name is  and marks are %.2f\n", vikash.id, vikash.marks);
    printf("which id %d Nik-Name is  and marks are %.2f\n", sunny.id, sunny.marks);

    return 0;
}