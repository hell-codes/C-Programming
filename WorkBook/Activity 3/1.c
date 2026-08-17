#include <stdio.h>
int main() {
    int age = 21;
    float gpa = 8.75f;
    char grade = 'A';
    printf("Age = %d, GPA = %.2f, Grade = %c\n", age, gpa, grade);
    printf("Size of int: %lu bytes\n", sizeof(int));
    printf("Size of float: %lu bytes\n", sizeof(float));
    printf("Size of char: %lu bytes\n", sizeof(char));
    return 0;
}
