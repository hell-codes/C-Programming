#include <stdio.h>

int main() {
    int marks[3][4];
    int i, j, total;
    float avg;

    printf("Enter marks for 3 students in 4 subjects:\n");
    for (i = 0; i < 3; i++) {
        printf("Student %d: ", i + 1);
        for (j = 0; j < 4; j++) {
            scanf("%d", &marks[i][j]);
        }
    }

    printf("\n--- Student-wise Results ---\n");
    for (i = 0; i < 3; i++) {
        total = 0;
        for (j = 0; j < 4; j++) {
            total += marks[i][j];
        }
        avg = (float)total / 4;
        printf("Student %d - Total: %d, Average: %.2f\n", i + 1, total, avg);
    }

    printf("\n--- Subject-wise Averages ---\n");
    for (j = 0; j < 4; j++) {
        total = 0;
        for (i = 0; i < 3; i++) {
            total += marks[i][j];
        }
        avg = (float)total / 3;
        printf("Subject %d - Average: %.2f\n", j + 1, avg);
    }

    return 0;
}
