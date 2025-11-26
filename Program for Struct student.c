#include <stdio.h>
#include <stdlib.h>
struct student
 {
    int age;
    char name[20];
    float marks;
};
int main()
 {
    struct student s1 = {18, "Anu", 87.55};
    printf("age: %d\n", s1.age);
    printf("name: %s\n", s1.name);
    printf("marks: %.2f\n", s1.marks);
    return 0;
}
